#include "version.h"
#include "injected_version.h"


#include <stddef.h>


void version_get_number(int* const major, int* const minor, int* const rev)
{
    // TODO
    (void) major;
    (void) minor;
    (void) rev;
}


const char* version_get_string(void)
{
    // TODO
    return NULL;
}


const char* version_get_compiled_hash(void)
{
    return GIT_BUILD_HASH;
}


const char* version_get_compiled_branch(void)
{
    return GIT_BUILD_BRANCH;
}


const char* version_get_compiled_time(void)
{
    return COMPILE_TIME;
}

