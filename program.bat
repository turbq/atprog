@echo off
setlocal

set "PATH=%~dp0atbackend;%~dp0batch;%PATH%"
set _fGreen=[32m
set _fRed=[31m
set _RESET=[0m
set "_dwnlds=0"
set "_cache_erased=0"
set "_target=target"
set "_clk=clk"
set "_bin=bin"

:check_packs
call check_pack %_target%
IF %ERRORLEVEL% EQU 0 (
    IF %_cache_erased% EQU 1 (
	echo FAIL
	pause
	exit /b 1
    )
    echo Required pack not available, trying to reset cache.
    goto reset_cache
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

:reset_cache
.\atpackmanager\atpackcli -f
set "_cache_erased=1"
goto check_packs
