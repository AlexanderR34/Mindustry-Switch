# Mindustry Native - Nintendo Switch Edition

> **Fork de:** [https://github.com/SwitchGDX/Mindustry-SwitchGDX](https://github.com/SwitchGDX/Mindustry-SwitchGDX)

---

## ⚠️ Estado Actual y Problemas Conocidos (WIP)

Este proyecto es un fork experimental y **aún no es del todo estable**. Actualmente presenta los siguientes problemas conocidos que requieren investigación y desarrollo:

- 🔇 **Audio:** El sonido aún no se reproduce dentro del juego (el juego permanece mudo / sin audio).
- 🎨 **Texturas:** Algunas texturas presentan fallos gráficos o no se renderizan correctamente.
- 📐 **UI dentro de Sectores:** La interfaz de usuario no se escala ni funciona bien una vez dentro de los sectores y el tutorial.
- 🎮 **Joy-Cons / Mandos:** Al tocar o presionar botones de los Joy-Cons, el juego se puede congelar o bloquear.
- ⚙️ **Estabilidad:** El juego aún no es estable en su totalidad y puede cerrarse inesperadamente.

---

## 🤝 ¡Contribuciones Bienvenidas!

**Cualquiera que desee colaborar para dejar este proyecto completamente funcional es más que bienvenido.**  
Si tienes experiencia en C++, ingeniería inversa de JVM/Clearwing, SDL2 para Switch, Mesa/Nouveau o libnx, tus aportes y Pull Requests son muy bienvenidos.

---

## 🚀 Compilación (Standalone Native)

Esta versión contiene el código fuente C++ ya preparado para compilarse directamente con **devkitPro**, sin necesidad de pasar por Gradle ni Java:

1. **Compilar:** Ejecuta `compile_switch.bat` (o corre `python tools/build_native.py`).
2. El archivo `.nro` se generará automáticamente en la carpeta `out/Mindustry.nro`.

---

# README Original de Mindustry-SwitchGDX

![Logo](romfs/sprites/logo.png)

[![Build Status](https://github.com/Anuken/Mindustry/workflows/Tests/badge.svg?event=push)](https://github.com/Anuken/Mindustry/actions)
[![Discord](https://img.shields.io/discord/391020510269669376.svg?logo=discord&logoColor=white&logoWidth=20&labelColor=7289DA&label=Discord&color=17cf48)](https://discord.gg/mindustry)  

The automation tower defense RTS, written in Java.

_[Trello Board](https://trello.com/b/aE2tcUwF/mindustry-40-plans)_  
_[Wiki](https://mindustrygame.github.io/wiki)_  
_[Javadoc](https://mindustrygame.github.io/docs/)_ 

## SwitchGDX
The [SwitchGDX](https://github.com/TheLogicMaster/switch-gdx) backend enables support for more portable
target platforms by transpiling to C++ using [Clearwing VM](https://github.com/TheLogicMaster/clearwing-vm).
The primary target is a Nintendo Switch Homebrew application.

### Limitations
- Performance is not amazing
- No multiplayer/networking support
- Poor mod support
- No controller support

### Mods
- This port targets the development version of Mindustry, so mod compatibility is poor ([Asthosus](https://github.com/Catana791/Asthosus) is known working)
- JavaScript mods currently have issues
- Mods must be extracted into `mods` directory due to a runtime bug with ZipFile extraction or string encoding
- Java mods must be extracted into `Mindustry/switch/mods` to be included in the built program (No JIT support)
and have relevant class packages added to the `switch.json` `reflective` section to prevent classes being optimized out.

### Windows
- Ensure the project directory is as close to the filesystem root as possible to avoid Windows path limits (In 2025...)
- Install MSYS2
- Open a mingw64 shell: `C:\msys64\msys2_shell.cmd -mingw64`
- Install dependencies: `pacman -S gcc git rsync texinfo mingw-w64-x86_64-cmake mingw-w64-x86_64-zziplib mingw-w64-x86_64-glew mingw-w64-x86_64-SDL2_mixer mingw-w64-x86_64-freetype mingw-w64-x86_64-bullet`
- Install [devkitPro Updater](https://github.com/devkitPro/installer/releases/latest) with Switch packages selected (Leave downloaded files)
- Open DevKitPro's MSYS2: `C:\devkitPro\msys2\msys2_shell.cmd -mingw64`
- Install dependencies: `pacman -S switch-zlib switch-zziplib switch-sdl2_mixer switch-libvorbis switch-freetype switch-glad switch-curl dkp-toolchain-vars texinfo`
- Build LibFFI for Switch

### Linux
- Install CMake, Ninja, Rsync, Texinfo, SDL2, SDL2_Mixer, GLEW, libffi, zlib, zziplib, freetype
- With APT: `sudo apt install build-essential texinfo rsync cmake ninja-build libffi-dev libzzip-dev libsdl2-dev libsdl2-mixer-dev zlib1g-dev libglew-dev libfreetype-dev libcurl4-gnutls-dev`
- Install [devkitPro pacman](https://github.com/devkitPro/pacman/releases/tag/v1.0.2)
- `dkp-pacman -S switch-zlib switch-sdl2 switch-sdl2_mixer switch-freetype switch-glad switch-curl switch-bulletphysics dkp-toolchain-vars`
- Build LibFFI for Switch

### Switch Homebrew
- The `NRO` task builds a Homebrew application

### UWP
- Install CMake for Windows
- Install Visual Studio 2022 and C++/UWP support
