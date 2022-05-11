@echo off
setlocal

set "PATH=%~dp0atbackend;%~dp0batch;%PATH%"
set _fGreen=[32m
set _fRed=[31m
set _RESET=[0m
set "_dwnlds=0"
set "_target=atxmega256a3u"
set "_clk=32 kHz"
set "_bin=.\binaries\firmware.elf"

Echo %_target% flashing started
:loop
call massprod-program %_target% "%_clk%" "%_bin%"
IF %ERRORLEVEL% NEQ 0 (
    echo %_fRed%������%_RESET%
    set /a "_dwnlds=%_dwnlds%-1"
)
set /a "_dwnlds=%_dwnlds%+1"
echo ����: %_fGreen%%_dwnlds%%_RESET%
echo �롥�� ���쭥�襥 ����⢨�:
echo [1] ����㧨�� �� �� ᫥���饥 ���ன�⢮
echo [2] �������� ࠡ���
CHOICE /c 12 /N
cls
IF %ERRORLEVEL% EQU 1 goto loop
IF %ERRORLEVEL% EQU 2 goto :eof
