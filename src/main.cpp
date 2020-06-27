#include <iostream>

#include "main.h"
#include "hi.h"
#include "version.h"

int main(int argc, char** argv)
{
  std::cout << __FUNCTION__ << std::endl;
  std::cout << COMMIT_HASH << std::endl;
  return 0;
  (void) argc;
  (void) argv;
}
