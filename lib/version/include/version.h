#ifndef   VERSION_H
#define   VERSION_H
#   ifdef __cplusplus
extern "C" {
#   endif


void version_get_number(int* const major, int* const minor, int* const rev);


const char* version_get_string(void);


const char* version_get_compiled_hash(void);


const char* version_get_compiled_branch(void);


const char* version_get_compiled_time(void);


#   ifdef __cplusplus
}
#   endif

#endif // VERSION_H

