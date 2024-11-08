@echo off

cd ./msvc/

set file_name=main

call compile.bat "%file_name%"
cd ../

"%file_name%.exe"
timeout 2 /nobreak