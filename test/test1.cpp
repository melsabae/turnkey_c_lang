#include <criterion/criterion.h>

Test(make_unit_tests_test, always_fail)
{
  cr_assert(0, "this will always fail.");

}

