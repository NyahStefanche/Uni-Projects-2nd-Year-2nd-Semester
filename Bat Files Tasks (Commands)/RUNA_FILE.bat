:ET1
IF EXIST %1 (
echo File %1 is running
%1 
) ELSE (
ECHO No Flash,Change it
GOTO ET1
)