#include "fizzbuzz.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// not advisable, as it is not thread-safe
// static char buf[30];

const char* fizzBuzz(char* buf, int val)
{
    // initialize variable, it may contain something!
    buf[0] = '\0';

    if (val % 3 == 0)
        strcat(buf, "Fizz");
    if (val % 5 == 0) 
        strcat(buf, "Buzz");
    if (strlen(buf) == 0)
        sprintf(buf, "%d", val);

    return buf;
     
}

// static char sbuf[1000];

const char* fizzBuzzSeq(char* sbuf, int val)
{
    // initialize the return string
    sbuf[0] = '\0';
    char token[32];

    int i;  // so Eclipse does not complain
    for (i = 1; i <= val; i++) {
        fizzBuzz (token, i);
        strcat(sbuf, token);

        if (i != val) strcat (sbuf, ", ");
        printf ("%s\n", sbuf);
    }

    return sbuf;
}

