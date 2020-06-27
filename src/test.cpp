#include <iostream>

#include "test.h"


void function(void)
{
  std::cout << __FUNCTION__ << std::endl;
}


int test_function(void)
{
  return 7;
}


int test_function2(const int n)
{
  return test_function() + n;
}

