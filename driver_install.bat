@echo off

rem Check privileges 
net file 1>NUL 2>NUL
if not '%errorlevel%' == '0' (
    powershell Start-Process -FilePath '%0' -ArgumentList '%cd%' -verb runas >NUL 2>&1
    exit /b
)

rem Change directory with passed argument. Processes started with
rem "runas" start with forced C:\Windows\System32 workdir
cd /d %1

rem Actual work

pnputil -i -a %cd%\Drivers\inf\winusb\atmel_winusb\atmel_winusb.inf
pause