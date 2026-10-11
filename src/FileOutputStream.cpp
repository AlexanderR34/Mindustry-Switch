#include "java/io/FileOutputStream.h"
#include "java/io/FileNotFoundException.h"
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>

#if defined(_WIN32)
#include <direct.h>
#define MKDIR_HELPER(p) _mkdir(p)
#else
#include <unistd.h>
#define MKDIR_HELPER(p) mkdir(p, 0777)
#endif

static void makeParentDirs(const char* filepath) {
    if (!filepath) return;
    char tmp[1024];
    size_t len = strlen(filepath);
    if (len >= sizeof(tmp)) return;
    strncpy(tmp, filepath, sizeof(tmp));
    tmp[sizeof(tmp) - 1] = '\0';
    for (char* p = tmp + 1; *p; p++) {
        if (*p == '/' || *p == '\\') {
            char orig = *p;
            *p = '\0';
            MKDIR_HELPER(tmp);
            *p = orig;
        }
    }
}

extern "C" {

void M_java_io_FileOutputStream_open_java_lang_String_boolean(jcontext ctx, jobject self, jobject nameObj, jbool append) {
    auto stream = (java_io_FileOutputStream *) NULL_CHECK(self);
    auto name = stringToNative(ctx, (jstring) NULL_CHECK(nameObj));
    makeParentDirs(name);
    auto f = fopen(name, append ? "ab" : "wb");
    if (f)
        stream->F_file = (jlong) f;
    else
        constructAndThrow<&class_java_io_FileNotFoundException, init_java_io_FileNotFoundException>(ctx);
}

void M_java_io_FileOutputStream_write_int_boolean(jcontext ctx, jobject self, jint b, jbool append) {
    auto stream = (java_io_FileOutputStream *) NULL_CHECK(self);
    auto f = (FILE *) stream->F_file;
    if (!f)
        throwIOException(ctx, "File closed");
    auto byte = (char) b;
    if (append)
        fseek(f, 0, SEEK_END);
    auto written = fwrite(&byte, 1, 1, f);
    if (written != 1)
        throwIOException(ctx, nullptr);
}

void M_java_io_FileOutputStream_writeBytes_Array1_byte_int_int_boolean(jcontext ctx, jobject self, jobject b, jint off, jint len, jbool append) {
    auto stream = (java_io_FileOutputStream *) NULL_CHECK(self);
    auto f = (FILE *) stream->F_file;
    if (!f)
        throwIOException(ctx, "File closed");
    if (append)
        fseek(f, 0, SEEK_END);
    auto bytes = (char *) ((jarray) b)->data;
    auto written = (jint) fwrite(bytes + off, 1, len, f);
    if (written != len)
        throwIOException(ctx, nullptr);
}

void M_java_io_FileOutputStream_close0(jcontext ctx, jobject self) {
    auto stream = (java_io_FileOutputStream *) NULL_CHECK(self);
    auto f = (FILE *) stream->F_file;
    if (!f)
        return;
    if (fclose(f))
        throwIOException(ctx, nullptr);
    stream->F_file = 0;
}

}
