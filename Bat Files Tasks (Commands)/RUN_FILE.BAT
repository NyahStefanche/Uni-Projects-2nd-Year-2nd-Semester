@echo off
IF EXIST %1 (
echo File %1 is running
%1 
) ELSE (
ECHO File %1 does not exist
)