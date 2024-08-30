/*********************************************
*
*   PROGRAMMING C TUTORIAL [Version 1.0]
*   (c) https://github.com/mikhailgutsu
*
**********************************************/

//<-------------------------- Generic Includes
#include <stdio.h>

//<-------------------------- User Includes
#include <windows.h>
#include "generic/logger/src/logger.c"
#include "generic/dinamic/src/menu.c"
#include "generic/triggers/src/triggers.c"

//<-------------------------- Defines
#define loop() for(;;) 
#define E_NOT_OK 0x00
#define E_OK     0x01

//<-------------------------- USER PREDEF
int mainGeneric();
int init();

//<-------------------------- MAIN
int main()
{
    SetColor(2);
    log_message("Logger initialized.");
    log_message("This is a sample log message.");
    log_message("Logging an integer: %d", 42);
    SetColor(7);

    system("pause");

    return 0;
}

//<--------------------------- EXEC
int mainGeneric()
{
    char RetVal = E_NOT_OK;



    return RetVal;
}

int init()
{
    init_logger();
    init_triggers();
    init_dinamic();
}