:ET1
IF [%1]==[] GOTO :EOF
CD %1
FOR %%i IN (*.OLD,*.BAK,*.TMP) DO REN %%i *.FD
SHIFT 
GOTO ET1