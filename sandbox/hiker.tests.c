#include "hiker.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void life_the_universe_and_everything(void)
{
  //assert(answer() == 42);
  //assert (answer(3) == "Fizz");
    assert (strcmp(answer(3), "Fizz") == 0);

    assert (strcmp(answer(5), "Buzz") == 0);
}

int main(void)
{
    life_the_universe_and_everything();
    // green-traffic light pattern...
    puts("All tests passed");
}
