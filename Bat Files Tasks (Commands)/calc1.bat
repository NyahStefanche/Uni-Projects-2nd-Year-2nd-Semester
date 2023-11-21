$echo off
SET /P A="Enter number -->"
SET /P Op="Enter operation -->"
SET /P B="Enter number -->"
SET /A S=%A% %Op% %B%
ECHO Res=%S%