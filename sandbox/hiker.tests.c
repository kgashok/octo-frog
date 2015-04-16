#include "hiker.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void fizzbuzzTests(void)
{
  //assert(answer() == 42);
  //assert (answer(3) == "Fizz");
    assert (strcmp(answer(3), "Fizz") == 0);

    assert (strcmp(answer(5), "Buzz") == 0);
    assert (strcmp(answer(15), "FizzBuzz") == 0);
}

int main(void)
{
    fizzbuzzTests();
    // green-traffic light pattern...
    puts("All tests passed");
}
