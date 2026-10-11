#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_STROKER_H
#include FT_GLYPH_H
#include FT_BITMAP_H

#include "Clearwing.h"
#include "java/nio/ByteBuffer.h"
#include "java/nio/Buffer.h"
#include "java/nio/DirectShortBuffer.h"
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <unordered_map>
#include <mutex>

static std::unordered_map<FT_Face, void*> faceMemoryMap;
static std::mutex faceMemoryMutex;

extern "C" {

static int lastErrorCode = 0;

static inline void* getBufferAddress(jcontext ctx, jobject bufObj) {
    if (!bufObj) return nullptr;
    auto buf = (java_nio_Buffer*)bufObj;
    if (buf->F_address != 0) {
        return (void*)(buf->F_address + buf->F_position);
    }
    jclass cl = (jclass)bufObj->clazz;
    const char* cname = cl && cl->nativeName ? (const char*)cl->nativeName : "";
    if (strstr(cname, "ByteBuffer")) {
        auto bb = (java_nio_ByteBuffer*)bufObj;
        if (bb->F_array) {
            auto arr = (jarray)bb->F_array;
            return (void*)((char*)arr->data + buf->F_position);
        }
    }
    return nullptr;
}

jint SM_arc_freetype_FreeType_getLastErrorCode_R_int(jcontext ctx) {
    return lastErrorCode;
}

jlong SM_arc_freetype_FreeType_initFreeTypeJni_R_long(jcontext ctx) {
    FT_Library library = nullptr;
    FT_Error error = FT_Init_FreeType(&library);
    if (error) {
        lastErrorCode = error;
        printf("[FreeType] FT_Init_FreeType failed with error %d\n", error);
        fflush(stdout);
        return 0;
    }
    printf("[FreeType] Initialized successfully, handle=%p\n", library);
    fflush(stdout);
    return (jlong)library;
}

void SM_arc_freetype_FreeType$Library_doneFreeType_long(jcontext ctx, jlong lib) {
    if (lib) FT_Done_FreeType((FT_Library)lib);
}

jlong SM_arc_freetype_FreeType$Library_newMemoryFace_long_java_nio_ByteBuffer_int_int_R_long(jcontext ctx, jlong lib, jobject buffer, jint length, jint faceIndex) {
    if (!lib || !buffer || length <= 0) return 0;
    void* ptr = getBufferAddress(ctx, buffer);
    if (!ptr) {
        printf("[FreeType] newMemoryFace: unable to get buffer address\n");
        fflush(stdout);
        return 0;
    }
    printf("[FreeType] newMemoryFace: lib=%p, buffer=%p, ptr=%p, length=%d, faceIndex=%d\n", (void*)lib, buffer, ptr, length, faceIndex);
    if (length >= 4) {
        unsigned char* b = (unsigned char*)ptr;
        printf("[FreeType] magic: '%c%c%c%c' (0x%02X 0x%02X 0x%02X 0x%02X)\n",
            b[0]>=32&&b[0]<127?b[0]:'.', b[1]>=32&&b[1]<127?b[1]:'.',
            b[2]>=32&&b[2]<127?b[2]:'.', b[3]>=32&&b[3]<127?b[3]:'.',
            b[0], b[1], b[2], b[3]);
    }
    fflush(stdout);

    void* persistentCopy = malloc(length);
    if (!persistentCopy) {
        printf("[FreeType] Failed to allocate persistent buffer of %d bytes for font face!\n", length);
        fflush(stdout);
        return 0;
    }
    memcpy(persistentCopy, ptr, length);

    FT_Face face = nullptr;
    FT_Error error = FT_New_Memory_Face((FT_Library)lib, (const FT_Byte*)persistentCopy, length, faceIndex, &face);
    if (error) {
        free(persistentCopy);
        lastErrorCode = error;
        printf("[FreeType] FT_New_Memory_Face error: %d\n", error);
        fflush(stdout);
        return 0;
    }
    {
        std::lock_guard lock(faceMemoryMutex);
        faceMemoryMap[face] = persistentCopy;
    }
    printf("[FreeType] Face created successfully: %p (persistent buffer at %p)\n", face, persistentCopy);
    fflush(stdout);
    return (jlong)face;
}

void SM_arc_freetype_FreeType$Face_doneFace_long(jcontext ctx, jlong face) {
    if (face) {
        FT_Face ftFace = (FT_Face)face;
        FT_Done_Face(ftFace);
        std::lock_guard lock(faceMemoryMutex);
        auto it = faceMemoryMap.find(ftFace);
        if (it != faceMemoryMap.end()) {
            free(it->second);
            faceMemoryMap.erase(it);
        }
    }
}

jint SM_arc_freetype_FreeType$Face_getAscender_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->ascender : 0;
}

jint SM_arc_freetype_FreeType$Face_getDescender_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->descender : 0;
}

jint SM_arc_freetype_FreeType$Face_getHeight_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->height : 0;
}

jint SM_arc_freetype_FreeType$Face_getNumGlyphs_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->num_glyphs : 0;
}

jint SM_arc_freetype_FreeType$Face_getFaceFlags_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->face_flags : 0;
}

jint SM_arc_freetype_FreeType$Face_getStyleFlags_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->style_flags : 0;
}

jint SM_arc_freetype_FreeType$Face_getUnderlinePosition_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->underline_position : 0;
}

jint SM_arc_freetype_FreeType$Face_getUnderlineThickness_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->underline_thickness : 0;
}

jint SM_arc_freetype_FreeType$Face_getMaxAdvanceWidth_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->max_advance_width : 0;
}

jint SM_arc_freetype_FreeType$Face_getMaxAdvanceHeight_long_R_int(jcontext ctx, jlong face) {
    return face ? ((FT_Face)face)->max_advance_height : 0;
}

jint SM_arc_freetype_FreeType$Face_hasKerning_long_R_boolean(jcontext ctx, jlong face) {
    return face ? FT_HAS_KERNING(((FT_Face)face)) : 0;
}

jint SM_arc_freetype_FreeType$Face_getKerning_long_int_int_int_R_int(jcontext ctx, jlong face, jint leftGlyph, jint rightGlyph, jint kernMode) {
    if (!face) return 0;
    FT_Vector kerning;
    FT_Error error = FT_Get_Kerning((FT_Face)face, leftGlyph, rightGlyph, kernMode, &kerning);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return kerning.x;
}

jint SM_arc_freetype_FreeType$Face_getCharIndex_long_int_R_int(jcontext ctx, jlong face, jint charcode) {
    return face ? FT_Get_Char_Index((FT_Face)face, charcode) : 0;
}

jint SM_arc_freetype_FreeType$Face_setPixelSizes_long_int_int_R_boolean(jcontext ctx, jlong face, jint width, jint height) {
    if (!face) return 0;
    FT_Error error = FT_Set_Pixel_Sizes((FT_Face)face, width, height);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return 1;
}

jint SM_arc_freetype_FreeType$Face_setCharSize_long_int_int_int_int_R_boolean(jcontext ctx, jlong face, jint charWidth, jint charHeight, jint horzResolution, jint vertResolution) {
    if (!face) return 0;
    FT_Error error = FT_Set_Char_Size((FT_Face)face, charWidth, charHeight, horzResolution, vertResolution);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return 1;
}

jint SM_arc_freetype_FreeType$Face_selectSize_long_int_R_boolean(jcontext ctx, jlong face, jint strikeIndex) {
    if (!face) return 0;
    FT_Error error = FT_Select_Size((FT_Face)face, strikeIndex);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return 1;
}

jint SM_arc_freetype_FreeType$Face_loadGlyph_long_int_int_R_boolean(jcontext ctx, jlong face, jint glyphIndex, jint loadFlags) {
    if (!face) return 0;
    loadFlags |= FT_LOAD_NO_AUTOHINT;
    FT_Error error = FT_Load_Glyph((FT_Face)face, glyphIndex, loadFlags);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return 1;
}

jint SM_arc_freetype_FreeType$Face_loadChar_long_int_int_R_boolean(jcontext ctx, jlong face, jint charCode, jint loadFlags) {
    if (!face) return 0;
    static int loadCharCount = 0;
    if (++loadCharCount <= 10 || loadCharCount % 200 == 0) {
        printf("[FreeType] loadChar #%d: charCode=%d ('%c')\n", loadCharCount, charCode, charCode >= 32 && charCode < 127 ? charCode : '?');
        fflush(stdout);
    }
    loadFlags |= FT_LOAD_NO_AUTOHINT;
    FT_Error error = FT_Load_Char((FT_Face)face, charCode, loadFlags);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return 1;
}

jlong SM_arc_freetype_FreeType$Face_getGlyph_long_R_long(jcontext ctx, jlong face) {
    return face ? (jlong)((FT_Face)face)->glyph : 0;
}

jlong SM_arc_freetype_FreeType$Face_getSize_long_R_long(jcontext ctx, jlong face) {
    return face ? (jlong)((FT_Face)face)->size : 0;
}

jlong SM_arc_freetype_FreeType$Size_getMetrics_long_R_long(jcontext ctx, jlong size) {
    return size ? (jlong)&((FT_Size)size)->metrics : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getXppem_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->x_ppem : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getYppem_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->y_ppem : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getXscale_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->x_scale : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getYscale_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->y_scale : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getAscender_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->ascender : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getDescender_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->descender : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getHeight_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->height : 0;
}

jint SM_arc_freetype_FreeType$SizeMetrics_getMaxAdvance_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Size_Metrics*)metrics)->max_advance : 0;
}

jlong SM_arc_freetype_FreeType$GlyphSlot_getMetrics_long_R_long(jcontext ctx, jlong slot) {
    return slot ? (jlong)&((FT_GlyphSlot)slot)->metrics : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getWidth_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->width : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getHeight_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->height : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getHoriAdvance_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->horiAdvance : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getHoriBearingX_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->horiBearingX : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getHoriBearingY_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->horiBearingY : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getVertAdvance_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->vertAdvance : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getVertBearingX_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->vertBearingX : 0;
}

jint SM_arc_freetype_FreeType$GlyphMetrics_getVertBearingY_long_R_int(jcontext ctx, jlong metrics) {
    return metrics ? ((FT_Glyph_Metrics*)metrics)->vertBearingY : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getLinearHoriAdvance_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->linearHoriAdvance : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getLinearVertAdvance_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->linearVertAdvance : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getAdvanceX_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->advance.x : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getAdvanceY_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->advance.y : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getFormat_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->format : 0;
}

jlong SM_arc_freetype_FreeType$GlyphSlot_getBitmap_long_R_long(jcontext ctx, jlong slot) {
    return slot ? (jlong)&((FT_GlyphSlot)slot)->bitmap : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getBitmapLeft_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->bitmap_left : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_getBitmapTop_long_R_int(jcontext ctx, jlong slot) {
    return slot ? ((FT_GlyphSlot)slot)->bitmap_top : 0;
}

jint SM_arc_freetype_FreeType$GlyphSlot_renderGlyph_long_int_R_boolean(jcontext ctx, jlong slot, jint renderMode) {
    if (!slot) return 0;
    static int renderCount = 0;
    if (++renderCount <= 10 || renderCount % 200 == 0) {
        printf("[FreeType] renderGlyph #%d (mode=%d)\n", renderCount, renderMode);
        fflush(stdout);
    }
    FT_Error error = FT_Render_Glyph((FT_GlyphSlot)slot, (FT_Render_Mode)renderMode);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return 1;
}

jlong SM_arc_freetype_FreeType$GlyphSlot_getGlyph_long_R_long(jcontext ctx, jlong slot) {
    if (!slot) return 0;
    FT_Glyph glyph = nullptr;
    FT_Error error = FT_Get_Glyph((FT_GlyphSlot)slot, &glyph);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return (jlong)glyph;
}

void SM_arc_freetype_FreeType$Glyph_done_long(jcontext ctx, jlong glyph) {
    if (glyph) FT_Done_Glyph((FT_Glyph)glyph);
}

jlong SM_arc_freetype_FreeType$Glyph_strokeBorder_long_long_boolean_R_long(jcontext ctx, jlong glyph, jlong stroker, jbool inside) {
    if (!glyph || !stroker) return 0;
    FT_Glyph target = (FT_Glyph)glyph;
    FT_Error error = FT_Glyph_StrokeBorder(&target, (FT_Stroker)stroker, inside ? 1 : 0, 1);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return (jlong)target;
}

jlong SM_arc_freetype_FreeType$Glyph_toBitmap_long_int_R_long(jcontext ctx, jlong glyph, jint renderMode) {
    if (!glyph) return 0;
    FT_Glyph target = (FT_Glyph)glyph;
    FT_Error error = FT_Glyph_To_Bitmap(&target, (FT_Render_Mode)renderMode, nullptr, 1);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return (jlong)target;
}

jlong SM_arc_freetype_FreeType$Glyph_getBitmap_long_R_long(jcontext ctx, jlong glyph) {
    if (!glyph) return 0;
    FT_BitmapGlyph bg = (FT_BitmapGlyph)glyph;
    return (jlong)&bg->bitmap;
}

jint SM_arc_freetype_FreeType$Glyph_getLeft_long_R_int(jcontext ctx, jlong glyph) {
    if (!glyph) return 0;
    return ((FT_BitmapGlyph)glyph)->left;
}

jint SM_arc_freetype_FreeType$Glyph_getTop_long_R_int(jcontext ctx, jlong glyph) {
    if (!glyph) return 0;
    return ((FT_BitmapGlyph)glyph)->top;
}

jint SM_arc_freetype_FreeType$Bitmap_getRows_long_R_int(jcontext ctx, jlong bitmap) {
    return bitmap ? ((FT_Bitmap*)bitmap)->rows : 0;
}

jint SM_arc_freetype_FreeType$Bitmap_getWidth_long_R_int(jcontext ctx, jlong bitmap) {
    return bitmap ? ((FT_Bitmap*)bitmap)->width : 0;
}

jint SM_arc_freetype_FreeType$Bitmap_getPitch_long_R_int(jcontext ctx, jlong bitmap) {
    return bitmap ? ((FT_Bitmap*)bitmap)->pitch : 0;
}

jint SM_arc_freetype_FreeType$Bitmap_getNumGray_long_R_int(jcontext ctx, jlong bitmap) {
    return bitmap ? ((FT_Bitmap*)bitmap)->num_grays : 0;
}

jint SM_arc_freetype_FreeType$Bitmap_getPixelMode_long_R_int(jcontext ctx, jlong bitmap) {
    return bitmap ? ((FT_Bitmap*)bitmap)->pixel_mode : 0;
}

jobject SM_arc_freetype_FreeType$Bitmap_getBuffer_long_R_java_nio_ByteBuffer(jcontext ctx, jlong bitmap) {
    if (!bitmap) return nullptr;
    FT_Bitmap* bm = (FT_Bitmap*)bitmap;
    if (!bm->buffer) return nullptr;
    int size = bm->rows * (bm->pitch < 0 ? -bm->pitch : bm->pitch);
    auto buffer = gcAllocProtected(ctx, &class_java_nio_ByteBuffer);
    init_java_nio_ByteBuffer_long_int_boolean(ctx, buffer, (jlong)bm->buffer, size, false);
    unprotectObject(buffer);
    return buffer;
}

jlong SM_arc_freetype_FreeType$Library_strokerNew_long_R_long(jcontext ctx, jlong lib) {
    if (!lib) return 0;
    FT_Stroker stroker = nullptr;
    FT_Error error = FT_Stroker_New((FT_Library)lib, &stroker);
    if (error) {
        lastErrorCode = error;
        return 0;
    }
    return (jlong)stroker;
}

void SM_arc_freetype_FreeType$Stroker_set_long_int_int_int_int(jcontext ctx, jlong stroker, jint radius, jint lineCap, jint lineJoin, jint miterLimit) {
    if (stroker) FT_Stroker_Set((FT_Stroker)stroker, radius, (FT_Stroker_LineCap)lineCap, (FT_Stroker_LineJoin)lineJoin, (FT_Fixed)miterLimit);
}

void SM_arc_freetype_FreeType$Stroker_done_long(jcontext ctx, jlong stroker) {
    if (stroker) FT_Stroker_Done((FT_Stroker)stroker);
}

}
