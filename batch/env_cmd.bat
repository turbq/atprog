@echo off
set "PATH=%~dp0..\atpackmanager;%~dp0..\atbackend;%~dp0..\batch;%PATH%"
start cmd /k type .\atbackend\examples.txt