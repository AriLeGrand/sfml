@echo off

:: Set up Visual Studio and Windows SDK paths
set VSCMD_ARG_HOST_ARCH=x64
set VSCMD_ARG_TGT_ARCH=x64

set VCToolsVersion=14.41.34120
set WindowsSDKVersion=10.0.26100.0\

set VCToolsInstallDir=%~dp0VC\Tools\MSVC\14.41.34120\
set WindowsSdkBinPath=%~dp0Windows Kits\10\bin\

set PATH=%~dp0VC\Tools\MSVC\14.41.34120\bin\Hostx64\x64;%~dp0Windows Kits\10\bin\10.0.26100.0\x64;%~dp0Windows Kits\10\bin\10.0.26100.0\x64\ucrt;%PATH%
set INCLUDE=%~dp0VC\Tools\MSVC\14.41.34120\include;%~dp0Windows Kits\10\Include\10.0.26100.0\ucrt;%~dp0Windows Kits\10\Include\10.0.26100.0\shared;%~dp0Windows Kits\10\Include\10.0.26100.0\um;%~dp0Windows Kits\10\Include\10.0.26100.0\winrt;%~dp0Windows Kits\10\Include\10.0.26100.0\cppwinrt
set LIB=%~dp0VC\Tools\MSVC\14.41.34120\lib\x64;%~dp0Windows Kits\10\Lib\10.0.26100.0\ucrt\x64;%~dp0Windows Kits\10\Lib\10.0.26100.0\um\x64

:: Set up SFML path
set SFML_DIR=C:\Users\mrivierez\Documents\sfml\SFML\
set INCLUDE=%INCLUDE%;%SFML_DIR%\include
set LIB=%LIB%;%SFML_DIR%\lib

set filename=%~1


:: Compile the C++ file with SFML
:: Example: compile main.cpp and link with SFML libraries (sfml-graphics, sfml-window, sfml-system)
cl /EHsc /I "%SFML_DIR%\include" C:\Users\mrivierez\Documents\sfml\%filename%.cpp /link /LIBPATH:"%SFML_DIR%\lib" sfml-graphics.lib sfml-window.lib sfml-system.lib
move %filename%.exe ../
move %filename%.obj ../


@REM pause
