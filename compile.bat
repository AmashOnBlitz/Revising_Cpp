@echo off

if not exist build md build
DEL build\main.exe 2>nul

g++ -Ofast -march=native ^
code\implementation\main.cpp ^
-Icode\Include ^
-o build\main.exe
