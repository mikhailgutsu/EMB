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

//<-------------------------- MAIN
int main()
{
    SetColor(2);
    log_message("Logger initialized.");
    log_message("This is a sample log message.");
    log_message("Logging an integer: %d", 42);
    SetColor(8);

    system("pause");

    return 0;
}