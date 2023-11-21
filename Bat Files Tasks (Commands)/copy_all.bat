@echo off
SET /P F="Enter folder -->"
XCOPY %F% %1 /S
IF NOT ERRORLEVEL 4 DIR %1 /S ELSE (
ECHO ErrorLevel is greater or equal 4
)