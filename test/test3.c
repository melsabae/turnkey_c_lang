#include <criterion/criterion.h>
#include <stdlib.h>
#include <time.h>


Test(make_unit_tests_test, sometimes_pass)
{
  srand(time(NULL));

  cr_assert(rand() > RAND_MAX / 2, "this is intended to be random.");
}

