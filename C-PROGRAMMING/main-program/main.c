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
#define loop(a) while(a) 
#define E_NOT_OK 0x00
#define E_OK     0x01

//<-------------------------- USER PREDEF
int mainGeneric();
int init();

//<------------------------------------------------------------------------------- MAIN
int main()
{
    init();
    mainGeneric();

    system("pause");
    return 0;
}

//<--------------------------- EXEC
int mainGeneric()
{
    char optionState = E_NOT_OK;
    int optionM = 1;

    mainMenuNr1();
    
    while(optionState == E_NOT_OK)
    {
        if (checkerBUTTON_UP() == E_OK)
        {
            switch(optionM)
            {
                case 1:
                optionM = 18;
                    mainMenuNr18();
                    break;

                case 2:
                optionM = 1;
                    mainMenuNr1();
                    break;

                case 3:
                optionM = 2;
                    mainMenuNr2();
                    break;

                case 4:
                optionM = 3;
                    mainMenuNr3();
                    break;
                
                case 5:
                optionM = 4;
                    mainMenuNr4();
                    break;

                case 6:
                optionM = 5;
                    mainMenuNr5();
                    break;

                case 7:
                optionM = 6;
                    mainMenuNr6();
                    break;

                case 8:
                optionM = 7;
                    mainMenuNr7();
                    break;

                case 9:
                optionM = 8;
                    mainMenuNr8();
                    break;

                case 10:
                optionM = 9;
                    mainMenuNr9();
                    break;

                case 11:
                optionM = 10;
                    mainMenuNr10();
                    break;

                case 12:
                optionM = 11;
                    mainMenuNr11();
                    break;

                case 13:
                optionM = 12;
                    mainMenuNr12();
                    break;
                
                case 14:
                optionM = 13;
                    mainMenuNr13();
                    break;

                case 15:
                optionM = 14;
                    mainMenuNr14();
                    break;

                case 16:
                optionM = 15;
                    mainMenuNr15();
                    break;

                case 17:
                optionM = 16;
                    mainMenuNr16();
                    break;

                case 18:
                optionM = 17;
                    mainMenuNr17();
                    break;
            }
            Sleep(100);
        }
        if (checkerBUTTON_DOWN() == E_OK)
        {
            switch(optionM)
            {
                case 17:
                optionM = 18;
                    mainMenuNr18();
                    break;

                case 18:
                optionM = 1;
                    mainMenuNr1();
                    break;

                case 1:
                optionM = 2;
                    mainMenuNr2();
                    break;

                case 2:
                optionM = 3;
                    mainMenuNr3();
                    break;
                
                case 3:
                optionM = 4;
                    mainMenuNr4();
                    break;

                case 4:
                optionM = 5;
                    mainMenuNr5();
                    break;

                case 5:
                optionM = 6;
                    mainMenuNr6();
                    break;

                case 6:
                optionM = 7;
                    mainMenuNr7();
                    break;

                case 7:
                optionM = 8;
                    mainMenuNr8();
                    break;

                case 8:
                optionM = 9;
                    mainMenuNr9();
                    break;

                case 9:
                optionM = 10;
                    mainMenuNr10();
                    break;

                case 10:
                optionM = 11;
                    mainMenuNr11();
                    break;

                case 11:
                optionM = 12;
                    mainMenuNr12();
                    break;
                
                case 12:
                optionM = 13;
                    mainMenuNr13();
                    break;

                case 13:
                optionM = 14;
                    mainMenuNr14();
                    break;

                case 14:
                optionM = 15;
                    mainMenuNr15();
                    break;

                case 15:
                optionM = 16;
                    mainMenuNr16();
                    break;

                case 16:
                optionM = 17;
                    mainMenuNr17();
                    break;
            }
            Sleep(100);
        }
        if (checkerBUTTON_ENTER() == E_OK)
        {


            Sleep(100);
        }
        if (checkerBUTTON_ESCAPE() == E_OK)
        {


            Sleep(100);
        }

    }



    return optionM;
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