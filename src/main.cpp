#include <switch.h>
#include "mindustry/switchplatform/SwitchLauncher.h"
#include "Clearwing.h"
#include <sys/stat.h>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>

static int nxlink_sock = -1;

extern "C" {
void userAppInit(void) {
    appletLockExit();
    romfsInit();
    socketInitializeDefault();
    nxlink_sock = nxlinkStdio();
}

void userAppExit(void) {
    if (nxlink_sock >= 0) {
        close(nxlink_sock);
        nxlink_sock = -1;
    }
    socketExit();
    romfsExit();
    appletUnlockExit();
}
}

int main(int argc, char* argv[]) {
    mkdir("sdmc:/switch", 0777);
    mkdir("sdmc:/switch/mindustry", 0777);

    if (nxlink_sock < 0) {
        FILE* logf = freopen("sdmc:/switch/mindustry/boot.log", "w", stdout);
        if (!logf) {
            logf = freopen("boot.log", "w", stdout);
        }
        freopen("sdmc:/switch/mindustry/boot.log", "a", stderr);
    }
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    printf("========================================\n");
    printf("[Main] Starting Mindustry Nintendo Switch Native\n");
    extern char* fake_heap_start;
    extern char* fake_heap_end;
    printf("[Main] Switch Heap Size: %lu MB (addr %p - %p)\n", (unsigned long)((fake_heap_end - fake_heap_start) / (1024 * 1024)), fake_heap_start, fake_heap_end);
    printf("[Main] Initializing Clearwing VM runtime...\n");
    printf("========================================\n");
    fflush(stdout);

    runVM(SM_mindustry_switchplatform_SwitchLauncher_main_Array1_java_lang_String);

    printf("[Main] Mindustry Clean Exit.\n");
    fflush(stdout);
    return 0;
}

