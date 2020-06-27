#include <stdio.h>
#include <stdbool.h>
#include "main.h"
#include "version.h"


int main(int argc, char** argv)
{
  puts(__FUNCTION__);
  puts(COMMIT_HASH);
  return 0;
  (void) argc;
  (void) argv;
}
