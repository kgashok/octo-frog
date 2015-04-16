#include "fizzbuzz.h"

#include <stdio.h>
#include <string.h>

static char buf[30];

char* fizzBuzz(int val)
{
    memset(buf,0,sizeof(buf));

    if (val % 3 == 0){
        strcpy(buf, "Fizz");
        // return "Fizz";
    }
    if (val % 5 == 0) {
        strcat(buf, "Buzz");
        //return "Buzz";
    }
    if (val % 3 != 0 && val % 5 != 0)
        sprintf(buf, "%d", val);

    printf ("%s\n", buf);
    return buf;
    
    
}

/*
int answer(void)
{
    return 6 * 9;
}

*/