$echo off
SET /P S="Enter number -->"
:ET1
SET /P Op="Enter operation -->"

IF %Op%==. GOTO :EOF
SET /P B="Enter number -->"
SET /A S=%S% %Op% %B%
ECHO Res=%S%
GOTO ET1