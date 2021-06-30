#include <stdio.h>
#include <stdbool.h>
#include "version.h"


int main(int argc, char** argv)
{
    int major = 0;
    int minor = 0;
    int rev   = 0;

    printf(
            "%s: version %s, hash %s, branch %s, time %s, major %d, minor %d, rev %d\n"
            , __FUNCTION__
            , version_get_string()
            , version_get_compiled_hash()
            , version_get_compiled_branch()
            , version_get_compiled_time()
            , major
            , minor
            , rev
          );

    return 0;
    (void) argc;
    (void) argv;
}

