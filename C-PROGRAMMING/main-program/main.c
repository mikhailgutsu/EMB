/******************************************************************************
*
*                       PROGRAMMING C TUTORIAL [Version 1.0]
*                       (c) https://github.com/mikhailgutsu
*   CORE: https://www.geeksforgeeks.org/c-programming-language/?ref=outind
*
*******************************************************************************/

//<-------------------------- Generic Includes
#include <stdio.h>

//<-------------------------- User Includes
#include <windows.h>
#include "generic/logger/src/logger.c"
#include "generic/dinamic/src/menu.c"

//<-------------------------- Defines
#define loop(a) while(a) 
#define E_NOT_OK 0x00
#define E_OK     0x01

//<-------------------------- Type Defs
#ifndef AUTOSAR_DATATYPES_H
#define AUTOSAR_DATATYPES_H

    typedef unsigned char       uint8;     /*                        0 .. 255             */
    typedef unsigned short      uint16;    /*                        0 .. 65535           */
    typedef unsigned long       uint32;    /*                        0 .. 4294967295      */
    typedef unsigned long long  uint64;    /*              0 .. 18446744073709551615      */
    typedef signed char         sint8;     /*                     -128 .. +127            */
    typedef signed short        sint16;    /*                   -32768 .. +32767          */
    typedef signed long         sint32;    /*              -2147483648 .. +2147483647     */
    typedef signed long long    sint64;    /* -9223372036854775808 .. 9223372036854775807 */
    typedef float               float32;
    typedef double              float64;

    typedef unsigned char       boolean;   

    typedef volatile unsigned char       vuint8;
    typedef volatile unsigned short      vuint16;
    typedef volatile unsigned long       vuint32;
    typedef volatile unsigned long long  vuint64;
    typedef volatile signed char         vsint8;
    typedef volatile signed short        vsint16;
    typedef volatile signed long         vsint32;
    typedef volatile signed long long    vsint64;
    typedef volatile float               vfloat32;
    typedef volatile double              vfloat64;

#endif

//<-------------------------- USER PREDEF
int init();

//<------------------------------------------------------------------------------- MAIN
int main()
{
    init();

    switch(mainGeneric())
    {
        case 1:
        system("cls");
            printf("1");
        break;
        case 2:
        system("cls");
            printf("2");
        break;
        case 3:
        system("cls");
            printf("3");
        break;
        case 4:
        system("cls");
            printf("4");
        break;
        case 5:
        system("cls");
            printf("5");
        break;
        case 6:
        system("cls");
            printf("6");
        break;
        case 7:
        system("cls");
            printf("7");
        break;
        case 8:
        system("cls");
            printf("8");
        break;
        case 9:
        system("cls");
            printf("9");
        break;
        case 10:
        system("cls");
            printf("10");
        break;
        case 11:
        system("cls");
            printf("11");
        break;
        case 12:
        system("cls");
            printf("12");
        break;
        case 13:
        system("cls");
            printf("13");
        break;
        case 14:
        system("cls");
            printf("14");
        break;
        case 15:
        system("cls");
            printf("15");
        break;
        case 16:
        system("cls");
            printf("16");
        break;
        case 17:
        system("cls");
            printf("17");
        break;
        case 18:
        system("cls");
            printf("18");
        break;
    }

    system("pause");
    return 0;
}

//<--------------------------- INIT
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