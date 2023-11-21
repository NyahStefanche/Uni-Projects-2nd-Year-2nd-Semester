IF NOT EXIST %1 GOTO ET1
IF "%2"=="/W" TYPE %1
IF !%2==!/C COPY %1 D:\
IF '%2'=='/E' NOTEPAD %1
IF %2==/D DEL %1 /P
GOTO :EOF
:ET1
ECHO File %1 does not exist