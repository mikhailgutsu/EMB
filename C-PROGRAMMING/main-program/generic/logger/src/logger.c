#include "../incl/logger.h"

int init_logger()
{
    return 0x01;
}

/***********************
        0: Black
        1: Blue
        2: Green
        3: Aqua
        4: Red
        5: Purple
        6: Yellow
        7: White (default)
        8: Gray
        9: Light Blue
        10: Light Green
        11: Light Aqua
        12: Light Red
        13: Light Purple
        14: Light Yellow
        15: Bright White
*************************/
void SetColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void log_message(const char *format, ...) {
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    printf("[%04d-%02d-%02d %02d:%02d:%02d] ",
           timeinfo->tm_year + 1900,
           timeinfo->tm_mon + 1,
           timeinfo->tm_mday,
           timeinfo->tm_hour,
           timeinfo->tm_min,
           timeinfo->tm_sec);

    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);

    printf("\n");
}