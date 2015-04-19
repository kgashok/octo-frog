#include "fizzbuzz.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void fizzbuzzTests(void)
{
    assert (strcmp(fizzBuzz(3),  "Fizz")     == 0);
    assert (strcmp(fizzBuzz(5),  "Buzz")     == 0);
    assert (strcmp(fizzBuzz(15), "FizzBuzz") == 0);

    assert (strcmp(fizzBuzzSeq(3), "1, 2, Fizz, ") == 0);

}

int main(void)
{
    fizzbuzzTests();
    // green-traffic light pattern...
    puts("All tests passed");
}
