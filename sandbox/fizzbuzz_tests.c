#include "fizzbuzz.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


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

const char* st16 = "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16";

static void assert_fizz_seq(const char * expected, int n)
{
    char actual[1000] = { '\0' };
    strcpy(actual, fizzBuzzSeq(n));
    if (strcmp(expected, actual) != 0)
    {
        printf("fizzBuzzSeq(%d)\n", n);
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

    assert_fizz_seq("1, 2, Fizz", 3);
    assert_fizz_seq(        st16, 16);
}


int main(void)
{
    fizzbuzzTests();
    // green-traffic light pattern...
    puts("All tests passed");
}
