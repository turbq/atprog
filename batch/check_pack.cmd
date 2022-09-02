@echo off

set "target=%~1"
.\atpackmanager\atpackcli -q %1 | FIND "Number of packs available: 0" > nul
