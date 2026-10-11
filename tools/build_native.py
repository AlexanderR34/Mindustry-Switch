import os
import sys
import glob
import subprocess
import time
import re
from concurrent.futures import ThreadPoolExecutor, as_completed

os.system("")

GREEN = "\033[92m"
CYAN = "\033[96m"
YELLOW = "\033[93m"
RED = "\033[91m"
MAGENTA = "\033[95m"
BOLD = "\033[1m"
RESET = "\033[0m"

DEVKITPRO = os.environ.get("DEVKITPRO")
if not DEVKITPRO or not os.path.exists(DEVKITPRO):
    DEVKITPRO = r"C:\devkitPro"

CXX = os.path.join(DEVKITPRO, "devkitA64", "bin", "aarch64-none-elf-g++.exe")
CC = os.path.join(DEVKITPRO, "devkitA64", "bin", "aarch64-none-elf-gcc.exe")
NACPTOOL = os.path.join(DEVKITPRO, "tools", "bin", "nacptool.exe")
ELF2NRO = os.path.join(DEVKITPRO, "tools", "bin", "elf2nro.exe")

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(PROJECT_ROOT, "src")
UNITY_DIR = os.path.join(PROJECT_ROOT, "build", "unity")
OBJ_DIR = os.path.join(PROJECT_ROOT, "build", "obj")
OUT_DIR = os.path.join(PROJECT_ROOT, "out")
ROMFS_DIR = os.path.join(PROJECT_ROOT, "romfs")
ICON_PATH = os.path.join(PROJECT_ROOT, "assets", "icon.png")

os.makedirs(UNITY_DIR, exist_ok=True)
os.makedirs(OBJ_DIR, exist_ok=True)
os.makedirs(OUT_DIR, exist_ok=True)

env = os.environ.copy()
env["DEVKITPRO"] = DEVKITPRO
env["DEVKITA64"] = os.path.join(DEVKITPRO, "devkitA64")
env["LIBNX"] = os.path.join(DEVKITPRO, "libnx")
env["PORTLIBS"] = os.path.join(DEVKITPRO, "portlibs", "switch")

CXXFLAGS = [
    "-march=armv8-a+crc+crypto",
    "-mtune=cortex-a57",
    "-mtp=soft",
    "-fPIE",
    "-O2",
    "-std=gnu++20",
    "-fno-rtti",
    "-fexceptions",
    "-fpermissive",
    f"-I{SRC_DIR}",
    f"-I{os.path.join(DEVKITPRO, 'libnx', 'include')}",
    f"-I{os.path.join(DEVKITPRO, 'portlibs', 'switch', 'include')}",
    f"-I{os.path.join(DEVKITPRO, 'portlibs', 'switch', 'include', 'freetype2')}",
    "-D__SWITCH__",
    "-DNDEBUG",
    "-w"
]

LDFLAGS = [
    f"-specs={os.path.join(DEVKITPRO, 'libnx', 'switch.specs')}",
    "-g",
    "-fPIE",
    "-Wl,--no-relax",
    f"-L{os.path.join(DEVKITPRO, 'libnx', 'lib')}",
    f"-L{os.path.join(DEVKITPRO, 'portlibs', 'switch', 'lib')}",
    "-lfreetype",
    "-lglad",
    "-lSDL2_image",
    "-lpng",
    "-ljpeg",
    "-lwebp",
    "-lSDL2_mixer",
    "-lvorbisfile",
    "-lvorbis",
    "-logg",
    "-lopusfile",
    "-lopus",
    "-lmpg123",
    "-lmodplug",
    "-lFLAC",
    "-lSDL2",
    "-lEGL",
    "-lGLESv2",
    "-lglapi",
    "-ldrm_nouveau",
    "-lzzip",
    "-lz",
    "-lnx",
    "-lm"
]

dummy_labels = " ".join([f"label_{k}:;" for k in range(60)])

def generate_unity_files():
    print(f"{CYAN}>> Escaneando archivos fuentes C++ de Mindustry...{RESET}")
    all_files = []
    for root, _, files in os.walk(SRC_DIR):
        if "asmjit" in root.replace('\\', '/').lower():
            continue
        for f in files:
            if f.endswith(".cpp"):
                if f in ("Clearwing.cpp", "main.cpp", "arc_sdl_natives.cpp", "arc_freetype_natives.cpp", "network_and_mod_stubs.cpp", "missing_stubs.cpp", "arc_audio_switch.cpp"):
                    continue
                all_files.append(os.path.join(root, f))
    
    all_files.sort()
    print(f"{GREEN}[OK]{RESET} Total archivos C++ detectados: {BOLD}{len(all_files)}{RESET}")
    
    batch_size = 80
    unity_files = []
    
    for i in range(0, len(all_files), batch_size):
        batch = all_files[i:i + batch_size]
        unity_file = os.path.join(UNITY_DIR, f"unity_{i // batch_size}.cpp")
        new_content_list = ["#include \"Clearwing.h\"\n\n"]
        for idx, f in enumerate(batch):
            file_id = f"{i}_{idx}"
            with open(f, "r", encoding="utf-8", errors="ignore") as src:
                content = src.read()
            
            is_runtime = os.path.dirname(f) == SRC_DIR
            if not is_runtime:
                content = content.replace("static VtableEntry vtableEntries", f"static VtableEntry vtableEntries_{file_id}")
                content = content.replace("(intptr_t) vtableEntries", f"(intptr_t) vtableEntries_{file_id}")
                
                content = content.replace("static jclass interfaces", f"static jclass interfaces_{file_id}")
                content = content.replace("(intptr_t) interfaces", f"(intptr_t) interfaces_{file_id}")
                
                content = content.replace("static MethodMetadata methods", f"static MethodMetadata methods_{file_id}")
                content = content.replace("(intptr_t) methods", f"(intptr_t) methods_{file_id}")
                
                content = content.replace("static FieldMetadata fields", f"static FieldMetadata fields_{file_id}")
                content = content.replace("(intptr_t) fields", f"(intptr_t) fields_{file_id}")
                
                content = content.replace("static jclass innerClasses", f"static jclass innerClasses_{file_id}")
                content = content.replace("(intptr_t) innerClasses", f"(intptr_t) innerClasses_{file_id}")
                
                content = content.replace("static void initAnnotations(jcontext", f"static void initAnnotations_{file_id}(jcontext")
                content = content.replace("(intptr_t) initAnnotations", f"(intptr_t) initAnnotations_{file_id}")
                
                content = content.replace("static AnnotationMetadata annotations", f"static AnnotationMetadata annotations_{file_id}")
                content = content.replace("(intptr_t) annotations", f"(intptr_t) annotations_{file_id}")

                content = re.sub(r'(\d+),(\d+e[+-]?\d+)', r'\1.\2', content)
                content = re.sub(r'(\n\tpopStackFrame\(ctx\);\s*\n\treturn[^;\n]*;\s*\n\})', rf'\n\t{dummy_labels}\1', content)
                content = re.sub(r'(\n\treturn;\s*\n\})', rf'\n\t{dummy_labels}\1', content)

            new_content_list.append(f"// --- Begin {os.path.basename(f)} ---\n{content}\n// --- End {os.path.basename(f)} ---\n\n")
            
        full_content = "".join(new_content_list)
        needs_write = True
        if os.path.exists(unity_file):
            with open(unity_file, "r", encoding="utf-8", errors="ignore") as ef:
                if ef.read() == full_content:
                    needs_write = False
        if needs_write:
            with open(unity_file, "w", encoding="utf-8") as out:
                out.write(full_content)
            obj_to_del = os.path.join(OBJ_DIR, f"unity_{i // batch_size}.o")
            if os.path.exists(obj_to_del):
                os.remove(obj_to_del)
                
        unity_files.append(unity_file)
        
    # Clean extra unity files from old partitions
    existing_unity = glob.glob(os.path.join(UNITY_DIR, "unity_*.cpp"))
    for ef in existing_unity:
        if ef not in unity_files:
            os.remove(ef)
            base = os.path.splitext(os.path.basename(ef))[0]
            obj = os.path.join(OBJ_DIR, f"{base}.o")
            if os.path.exists(obj):
                os.remove(obj)

    print(f"{GREEN}[OK]{RESET} Generadas {BOLD}{len(unity_files)}{RESET} unidades de traducción optimizadas.")
    return unity_files

def compile_unity_file(unity_file):
    base_name = os.path.splitext(os.path.basename(unity_file))[0]
    obj_file = os.path.join(OBJ_DIR, f"{base_name}.o")
    
    if os.path.exists(obj_file) and os.path.getmtime(obj_file) >= os.path.getmtime(unity_file):
        return obj_file, True, ""
        
    cmd = [CXX] + CXXFLAGS + ["-c", unity_file, "-o", obj_file]
    result = subprocess.run(cmd, capture_output=True, text=True)
    if result.returncode != 0:
        return obj_file, False, result.stderr
    return obj_file, True, ""

def generate_missing_stubs(undefs):
    known_class_paths = {
        "class_arc_backend_sdl_SdlApplication": "arc/backend/sdl/SdlApplication",
        "class_arc_files_Fi": "arc/files/Fi",
        "class_arc_net_Client": "arc/net/Client",
        "class_arc_net_Connection": "arc/net/Connection",
        "class_arc_net_NetListener$LagListener": "arc/net/NetListener$LagListener",
        "class_arc_net_NetListener$ThreadedListener": "arc/net/NetListener$ThreadedListener",
        "class_arc_net_Server": "arc/net/Server",
        "class_arc_net_Server$DiscoveryReceiver": "arc/net/Server$DiscoveryReceiver",
        "class_arc_net_TcpConnection": "arc/net/TcpConnection",
        "class_arc_net_UdpConnection": "arc/net/UdpConnection",
        "class_arc_net_dns_JndiContextNameserverProvider$Inner": "arc/net/dns/JndiContextNameserverProvider$Inner",
        "class_arc_util_Http$HttpRequest": "arc/util/Http$HttpRequest",
        "class_java_lang_UnsatisfiedLinkError": "java/lang/UnsatisfiedLinkError",
        "class_java_net_DatagramPacket": "java/net/DatagramPacket",
        "class_java_net_DatagramSocket": "java/net/DatagramSocket",
        "class_java_util_concurrent_CountDownLatch": "java/util/concurrent/CountDownLatch",
        "class_mindustry_core_Platform$1": "mindustry/core/Platform$1",
        "class_mindustry_mod_ModClassLoader": "mindustry/mod/ModClassLoader",
        "class_mindustry_mod_Mods": "mindustry/mod/Mods",
        "class_mindustry_net_ArcNetProvider": "mindustry/net/ArcNetProvider",
        "class_mindustry_net_BeControl": "mindustry/net/BeControl",
    }

    stubs_code = ['#include "Clearwing.h"\n#include "ffi.h"\n\nextern "C" {\n']

    stubs_code.append('''
ffi_type ffi_type_void = { 0, 0, 0, nullptr };
ffi_type ffi_type_uint8 = { 1, 1, 1, nullptr };
ffi_type ffi_type_sint8 = { 1, 1, 2, nullptr };
ffi_type ffi_type_uint16 = { 2, 2, 3, nullptr };
ffi_type ffi_type_sint16 = { 2, 2, 4, nullptr };
ffi_type ffi_type_uint32 = { 4, 4, 5, nullptr };
ffi_type ffi_type_sint32 = { 4, 4, 6, nullptr };
ffi_type ffi_type_uint64 = { 8, 8, 7, nullptr };
ffi_type ffi_type_sint64 = { 8, 8, 8, nullptr };
ffi_type ffi_type_float = { 4, 4, 9, nullptr };
ffi_type ffi_type_double = { 8, 8, 10, nullptr };
ffi_type ffi_type_pointer = { 8, 8, 11, nullptr };

static uint64_t dummy_hb_storage[32] = {0};
void* hb_blob_create(...) { return dummy_hb_storage; }
void hb_blob_destroy(...) {}
void hb_buffer_add_utf8(...) {}
void hb_buffer_clear_contents(...) {}
void* hb_buffer_create(...) { return dummy_hb_storage; }
void hb_buffer_destroy(...) {}
void* hb_buffer_get_glyph_infos(...) { return nullptr; }
void* hb_buffer_get_glyph_positions(...) { return nullptr; }
unsigned int hb_buffer_get_length(...) { return 0; }
void hb_buffer_guess_segment_properties(...) {}
void* hb_face_create(...) { return dummy_hb_storage; }
void* hb_face_create_for_tables(...) { return dummy_hb_storage; }
void hb_face_destroy(...) {}
void hb_face_set_index(...) {}
void hb_face_set_upem(...) {}
void* hb_font_create(...) { return dummy_hb_storage; }
void hb_font_destroy(...) {}
void* hb_font_get_face(...) { return dummy_hb_storage; }
void hb_font_set_scale(...) {}
unsigned int hb_ot_layout_collect_lookups(...) { return 0; }
void hb_ot_layout_lookup_collect_glyphs(...) {}
unsigned int hb_ot_layout_lookup_would_substitute(...) { return 0; }
void hb_ot_tags_from_script_and_language(...) {}
void* hb_set_create(...) { return dummy_hb_storage; }
void hb_set_destroy(...) {}
unsigned int hb_set_is_empty(...) { return 1; }
unsigned int hb_set_next(...) { return 0; }
unsigned int hb_set_get_population(...) { return 0; }
void hb_set_subtract(...) {}
void hb_shape(...) {}
''')

    for sym in sorted(undefs):
        if sym.startswith("ffi_type_") or sym.startswith("hb_"):
            continue
        if sym.startswith("class_"):
            c_path = known_class_paths.get(sym, sym[6:].replace('_', '/'))
            stubs_code.append(f'Class {sym} = {{ .nativeName = (intptr_t) "{c_path}", .parentClass = (intptr_t) &class_java_lang_Object, .markFunction = 0, .access = 0x21 }};\n')
            stubs_code.append(f'static bool reg_{sym.replace("$", "_")} = registerClass(&{sym});\n')
        elif sym.startswith("clinit_"):
            stubs_code.append(f"void {sym}(jcontext ctx) {{}}\n")
        elif "_R_int" in sym or "_R_boolean" in sym or "_R_short" in sym or "_R_byte" in sym or "_R_char" in sym:
            stubs_code.append(f"jint {sym}(...) {{ return 0; }}\n")
        elif "_R_float" in sym:
            stubs_code.append(f"jfloat {sym}(...) {{ return 0.0f; }}\n")
        elif "_R_double" in sym:
            stubs_code.append(f"jdouble {sym}(...) {{ return 0.0; }}\n")
        elif "_R_long" in sym:
            stubs_code.append(f"jlong {sym}(...) {{ return 0; }}\n")
        elif "_R_" in sym:
            stubs_code.append(f"jobject {sym}(...) {{ return nullptr; }}\n")
        else:
            stubs_code.append(f"void {sym}(...) {{}}\n")

    stubs_code.append("\n}\n")

    stubs_file = os.path.join(SRC_DIR, "missing_stubs.cpp")
    with open(stubs_file, "w", encoding="utf-8") as f:
        f.write("".join(stubs_code))

    stubs_obj = os.path.join(OBJ_DIR, "missing_stubs.o")
    cmd_comp = [CXX] + CXXFLAGS + ["-c", stubs_file, "-o", stubs_obj]
    res_comp = subprocess.run(cmd_comp, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if res_comp.returncode != 0:
        print(f"{RED}[FAIL STUBS]: {res_comp.stderr}{RESET}")
        sys.exit(1)

    print(f"{GREEN}[OK]{RESET} missing_stubs.o generado y compilado con éxito!")
    return stubs_obj

def main():
    print(f"\n{BOLD}{MAGENTA}==================================================================={RESET}")
    print(f"{BOLD}{MAGENTA}   MINDUSTRY NATIVE BUILD - NINTENDO SWITCH (HORIZON OS / ARM64)  {RESET}")
    print(f"{BOLD}{MAGENTA}==================================================================={RESET}\n")
    
    start_time = time.time()
    unity_files = generate_unity_files()
    
    cpu_workers = min(os.cpu_count() or 4, 16)
    print(f"\n{CYAN}>> Compilando en paralelo con {BOLD}{cpu_workers}{RESET}{CYAN} núcleos CPU...{RESET}\n")
    
    obj_files = []
    errors = []
    completed = 0
    total = len(unity_files)
    
    core_files = [
        ("Clearwing.cpp", "clearwing.o"),
        ("main.cpp", "main.o"),
        ("arc_sdl_natives.cpp", "arc_sdl_natives.o"),
        ("arc_freetype_natives.cpp", "arc_freetype_natives.o"),
        ("network_and_mod_stubs.cpp", "network_and_mod_stubs.o"),
        ("arc_audio_switch.cpp", "arc_audio_switch.o")
    ]
    for src_name, obj_name in core_files:
        src_path = os.path.join(SRC_DIR, src_name)
        if os.path.exists(src_path):
            obj_path = os.path.join(OBJ_DIR, obj_name)
            c_res = subprocess.run([CXX] + CXXFLAGS + ["-c", src_path, "-o", obj_path], capture_output=True, text=True)
            if c_res.returncode != 0:
                print(f"{RED}Error compilando {src_name}:{RESET}\n{c_res.stderr}")
                sys.exit(1)
            obj_files.append(obj_path)
            print(f"{GREEN}[OK]{RESET} Compilado núcleo: {BOLD}{src_name}{RESET}")

    with ThreadPoolExecutor(max_workers=cpu_workers) as executor:
        futures = {executor.submit(compile_unity_file, u): u for u in unity_files}
        for future in as_completed(futures):
            u_file = futures[future]
            obj, success, err = future.result()
            completed += 1
            pct = (completed / total) * 100
            if success:
                obj_files.append(obj)
                print(f" {GREEN}[{pct:5.1f}%]{RESET} {completed:3d}/{total} Compilado: {BOLD}{os.path.basename(u_file)}{RESET}")
            else:
                errors.append((u_file, err))
                print(f" {RED}[ERROR]{RESET} {completed:3d}/{total} Fallo en: {BOLD}{os.path.basename(u_file)}{RESET}\n{RED}{err[:300]}{RESET}")

    if errors:
        print(f"\n{RED}Error de compilación en {len(errors)} archivos.{RESET}")
        sys.stdout.flush()
        sys.exit(1)
        
    print(f"\n{GREEN}[OK]{RESET} {BOLD}¡Todos los módulos C++ han sido compilados con éxito!{RESET}")
    sys.stdout.flush()
    
    # 1st link pass to gather undefined symbols
    resp_file = os.path.join(OBJ_DIR, "objects.rsp")
    all_objs = [o for o in glob.glob(os.path.join(OBJ_DIR, "*.o")) if not o.endswith("missing_stubs.o")]
    with open(resp_file, "w", encoding="utf-8") as rf:
        rf.write(" ".join([f'"{os.path.abspath(o)}"' for o in all_objs]))

    elf_temp = os.path.join(OUT_DIR, "Mindustry.elf")
    cmd_test = [CXX, f"@{resp_file}"] + LDFLAGS + ["-o", elf_temp]
    res_test = subprocess.run(cmd_test, env=env, capture_output=True, text=True)

    if res_test.returncode != 0:
        undefs = set()
        for line in res_test.stderr.splitlines():
            if "undefined reference to" in line:
                sym = line.split("undefined reference to")[-1].strip().strip("`").strip("'")
                undefs.add(sym)
        if undefs:
            print(f"{CYAN}>> Generando {len(undefs)} stubs para resolver referencias indefinidas...{RESET}")
            generate_missing_stubs(undefs)
            all_objs = glob.glob(os.path.join(OBJ_DIR, "*.o"))
            with open(resp_file, "w", encoding="utf-8") as rf:
                rf.write(" ".join([f'"{os.path.abspath(o)}"' for o in all_objs]))

    elf_file = os.path.join(OUT_DIR, "Mindustry.elf")
    print(f"\n{CYAN}>> Enlazando ejecutable nativo ARM64: {BOLD}Mindustry.elf{RESET}...")
    sys.stdout.flush()
    link_cmd = [CXX, f"@{resp_file}"] + LDFLAGS + ["-o", elf_file]
    
    link_res = subprocess.run(link_cmd, env=env, capture_output=True, text=True)
    if link_res.returncode != 0:
        print(f"{RED}Error de enlace final:{RESET}\n{link_res.stderr}")
        sys.stdout.flush()
        sys.exit(1)
        
    elf_size = os.path.getsize(elf_file) / (1024*1024)
    print(f"{GREEN}[OK]{RESET} Binario ELF generado: {BOLD}{elf_file}{RESET} ({elf_size:.2f} MB)")
    sys.stdout.flush()
    
    # Create NACP
    nacp_file = os.path.join(OUT_DIR, "Mindustry.nacp")
    print(f"\n{CYAN}>> Generando metadatos NACP de Horizon OS (TitleID: 01004D494E445500)...{RESET}")
    sys.stdout.flush()
    nacp_cmd = [
        NACPTOOL, "--create", "Mindustry", "Anuken", "8.0.0", nacp_file,
        "--titleid=01004D494E445500"
    ]
    subprocess.run(nacp_cmd, env=env, check=True)
    print(f"{GREEN}[OK]{RESET} Metadatos NACP generados.")
    sys.stdout.flush()
    
    # Package NRO
    nro_file = os.path.join(OUT_DIR, "Mindustry.nro")
    print(f"\n{CYAN}>> Empaquetando Homebrew NRO con RomFS completo integrado...{RESET}")
    sys.stdout.flush()
    nro_cmd = [
        ELF2NRO, elf_file, nro_file,
        f"--nacp={nacp_file}",
        f"--romfsdir={ROMFS_DIR}"
    ]
    if os.path.exists(ICON_PATH):
        nro_cmd.append(f"--icon={ICON_PATH}")
        
    subprocess.run(nro_cmd, env=env, check=True)
    
    nro_size = os.path.getsize(nro_file) / (1024*1024)
    elapsed = time.time() - start_time
    
    print(f"\n{BOLD}{GREEN}==================================================================={RESET}")
    print(f"{BOLD}{GREEN}   ¡COMPILACION Y EMPAQUETADO COMPLETADOS CON EXITO!              {RESET}")
    print(f"{BOLD}{GREEN}==================================================================={RESET}")
    print(f" * Paquete final Switch: {BOLD}{nro_file}{RESET}")
    print(f" * Tamaño total:         {BOLD}{nro_size:.2f} MB{RESET} (con RomFS embebido)")
    print(f" * Tiempo transcurrido:  {BOLD}{elapsed:.1f} segundos{RESET}")
    print(f"===================================================================\n")
    print("Ya puedes enviar 'Mindustry.nro' a tu Switch mediante nxlink.")
    sys.stdout.flush()

if __name__ == "__main__":
    main()
