#ifndef LOGGER_H
#define LOGGER_H

#include <windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <time.h>

int init_logger();
void SetColor(int color);
void log_message(const char *format, ...);

#endif // LOGGER_H