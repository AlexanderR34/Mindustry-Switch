#include "Clearwing.h"

extern "C" {

// Strings returned here are never freed but are cached, so it's fine

#if not USE_PLATFORM_OVERRIDE

const char *getOSLanguage() {
    return "en-US";
}

const char *getSystemProperty(const char *key) {
    if (!key) return "";
    std::string name(key);
    if (name == "os.name") return "Nintendo Switch";
    if (name == "os.arch") return "aarch64";
    if (name == "os.version") return "1.0.0";
    if (name == "user.name") return "switch";
    if (name == "user.home") return "/switch";
    if (name == "user.dir") return "/";
    if (name == "line.separator") return "\n";
    if (name == "file.separator") return "/";
    if (name == "path.separator") return ":";
    if (name == "java.version") return "17.0.0";
    if (name == "java.vendor") return "Clearwing";
    if (name == "java.vm.name") return "Clearwing";
    if (name == "java.vm.vendor") return "Clearwing";
    if (name == "java.runtime.name") return "Clearwing";
    if (name == "java.home") return "/";
    if (name == "sun.arch.data.model") return "64";
    if (name == "file.encoding") return "UTF-8";
    return "";
}

#endif

}
