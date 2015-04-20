#include "fizzbuzz.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


static void assert_fizz(const char * expected, int n)
{
    char actual[32] = { '\0' };
    fizzBuzz (actual, n);

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
    fizzBuzzSeq (actual, n);

    if (strcmp(expected, actual) != 0)
    {
        printf("fizzBuzzSeq(%d)\n", n);
        printf("expected: \"%s\"\n", expected);
        printf("  actual: \"%s\"\n", actual);
        assert(false);
    }
}

static void numbers_divisible_by_3_are_Fizz (void)
{
    assert_fizz("Fizz", 3);
    assert_fizz("Fizz", 6);
}

static void numbers_divisible_by_5_are_Buzz (void)
{
    assert_fizz("Buzz", 5);
    assert_fizz("Buzz", 10);
    assert_fizz("Buzz", 20);
}

static void numbers_divisible_by_3and5_are_FizzBuzz (void)
{
    assert_fizz("FizzBuzz", 15);
    assert_fizz("FizzBuzz", 105);
}



static void fizzbuzzTests(void)
{
    numbers_divisible_by_3_are_Fizz();
    numbers_divisible_by_5_are_Buzz();
    numbers_divisible_by_3and5_are_FizzBuzz();

    assert_fizz_seq("1, 2, Fizz", 3);
    assert_fizz_seq(        st16, 16);
}


int main(void)
{
    fizzbuzzTests();
    // green-traffic light pattern...
    puts("All tests passed");
}
