#include "fizzbuzz.h"

#include <stdio.h>
#include <string.h>

static char buf[30];

char* fizzBuzz(int val)
{
    // initialize static variable, it may contain something!
    memset(buf,0,sizeof(buf));

    if (val % 3 == 0)
        strcat(buf, "Fizz");
    if (val % 5 == 0) 
        strcat(buf, "Buzz");
    if (strlen(buf) == 0)
        sprintf(buf, "%d", val);

    return buf;
     
}

static char sbuf[1000];

char* fizzBuzzSeq(int val)
{
    memset(sbuf, 0, sizeof(buf));

    int i;
    for (i = 1; i <= val; i++) {
        strcat(sbuf, fizzBuzz(i));
        if (i != val)
            strcat (sbuf, ", ");
        printf ("%s\n", sbuf);

    }

    return sbuf;
}

