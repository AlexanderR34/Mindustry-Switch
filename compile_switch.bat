@echo off
title Mindustry Native Switch Build (Horizon OS)
set "DEVKITPRO=C:\devkitPro"
set "PATH=C:\devkitPro\devkitA64\bin;C:\devkitPro\tools\bin;C:\devkitPro\msys2\usr\bin;%PATH%"
cd /d "%~dp0"
cls
python tools\build_native.py
pause
