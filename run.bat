@echo off
if /I "%1"=="time" (
    echo Running with time measurement...
    powershell -Command "Measure-Command { .\build\main.exe }"
) else (
    .\build\main.exe
)
