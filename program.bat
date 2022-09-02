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

IF EXIST "%~dp0atpackmanager\cache.ini" (set /p _cache_erased=<%~dp0atpackmanager\cache.ini) else (set "_cache_erased=0")

IF %_cache_erased% EQU 0 (
    .\atpackmanager\atpackcli -t
    (echo 1)>%~dp0atpackmanager\cache.ini
)

Echo %_target% flashing started

:loop
call massprod-program %_target% "%_clk%" "%_bin%"
IF %ERRORLEVEL% NEQ 0 (
    echo %_fRed%ОШИБКА%_RESET%
    set /a "_dwnlds=%_dwnlds%-1"
)
set /a "_dwnlds=%_dwnlds%+1"
echo Прошито: %_fGreen%%_dwnlds%%_RESET%
echo Выберите дальнейшее действие:
echo [1] Загрузить ПО на следующее устройство
echo [2] Завершить работу
CHOICE /c 12 /N
cls
IF %ERRORLEVEL% EQU 1 goto loop
IF %ERRORLEVEL% EQU 2 goto :eof

