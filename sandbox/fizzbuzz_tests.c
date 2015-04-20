#include "fizzbuzz.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


char* st16 = "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16";

static void assert_fizz(const char * expected, int n)
{
    char actual[32] = { '\0' };
    strcpy(actual, fizzBuzz(n));
    if (strcmp(expected, actual) != 0)
    {
        printf("fizzBuzz(%d)\n", n);
        printf("expected: \"%s\"\n", expected);
        printf("  actual: \"%s\"\n", actual);
        assert(false);
    }
}

static void fizzbuzzTests(void)
{
    assert_fizz("Fizz", 3);
    assert_fizz("Buzz", 5);
    assert_fizz("FizzBuzz", 15);

/*    assert (strcmp(fizzBuzz(3),  "Fizz")     == 0);
    assert (strcmp(fizzBuzz(5),  "Buzz")     == 0);
    assert (strcmp(fizzBuzz(15), "FizzBuzz") == 0);

    assert (strcmp(fizzBuzzSeq(3), "1, 2, Fizz") == 0);
    assert (strcmp(fizzBuzzSeq(16), st16) == 0);
*/
}

int main(void)
{
    fizzbuzzTests();
    // green-traffic light pattern...
    puts("All tests passed");
}
