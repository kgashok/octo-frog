#include "fizzbuzz.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

char* st16 = "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16";

static void fizzbuzzTests(void)
{
    assert (strcmp(fizzBuzz(3),  "Fizz")     == 0);
    assert (strcmp(fizzBuzz(5),  "Buzz")     == 0);
    assert (strcmp(fizzBuzz(15), "FizzBuzz") == 0);

    assert (strcmp(fizzBuzzSeq(3), "1, 2, Fizz") == 0);
    assert (strcmp(fizzBuzzSeq(16), st16) == 0);


}

int main(void)
{
    fizzbuzzTests();
    // green-traffic light pattern...
    puts("All tests passed");
    return 0;
}
