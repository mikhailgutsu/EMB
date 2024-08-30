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
    init();

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
    char RetVal = E_NOT_OK;
    int c_err = 0;

    //  LOG INIT
    if (init_logger() == E_OK) 
    {
        SetColor(2);
            log_message("Logger initialized without errors. [<0.2s]");
            c_err++;
                SetColor(7);
    }
    else if (init_logger() != E_OK) 
    {
        SetColor(4);
            log_message("Logger initialized with errors.");
                SetColor(7);
    }Sleep(200);

    //  TRIGGER INIT
    if (init_triggers() == E_OK) 
    {
        SetColor(2);
            log_message("Trigger initialized without errors. [<0.2s]");
            c_err++;
                SetColor(7);
    }
    else if (init_triggers() != E_OK) 
    {
        SetColor(4);
            log_message("Trigger initialized with errors.");
                SetColor(7);
    }Sleep(200);
    
    //  DINAMIC INIT
    if (init_dinamic() == E_OK) 
    {
        SetColor(2);
            log_message("DI-MENU initialized without errors. [<0.2s]");
            c_err++;
                SetColor(7);
    }
    else if (init_dinamic() != E_OK) 
    {
        SetColor(4);
            log_message("DI-MENU initialized with errors.");
                SetColor(7);
    }Sleep(200);

    //ERR HANDLE
    if (c_err == 3)
    {   
        SetColor(2);
            log_message("WELCOME");
                SetColor(7);
        RetVal = E_OK;
    }Sleep(200);

    return RetVal;
}