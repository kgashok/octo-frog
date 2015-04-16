#include "hiker.h"

#include <stdio.h>

static char buf[30];

char* answer(int val)
{
    if (val % 3 == 0)
        return "Fizz";

    sprintf(buf, "%d", val);
    return buf;    
    
    
}

/*
int answer(void)
{
    return 6 * 9;
}

*/