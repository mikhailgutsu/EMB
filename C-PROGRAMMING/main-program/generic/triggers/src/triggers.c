#include "../incl/triggers.h"

char checkerBUTTON_UP()
{
    if (GetAsyncKeyState(VK_UP) & 0x8000)
            {
                return 0x01;
            }

    return 0x00;
}

char checkerBUTTON_DOWN()
{
    if (GetAsyncKeyState(VK_DOWN) & 0x8000)
            {
                return 0x01;
            }

    return 0x00;
}

char checkerBUTTON_ENTER()
{
    if (GetAsyncKeyState(VK_RETURN) & 0x8000)
            {
                return 0x01;
            }
            
    return 0x00;
}

char checkerBUTTON_ESCAPE()
{
    if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
            {
                return 0x01;
            }
            
    return 0x00;
}