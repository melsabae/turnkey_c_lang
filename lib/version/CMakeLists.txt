set(library_name version)

add_subdirectory(test)


execute_process(
    COMMAND "date"
    OUTPUT_VARIABLE compile_time
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )

execute_process(
    COMMAND "git" "rev-parse" "HEAD"
    OUTPUT_VARIABLE git_build_hash
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )

execute_process(
    COMMAND "git" "rev-parse" "--abbrev-ref" "HEAD"
    OUTPUT_VARIABLE git_build_branch
    OUTPUT_STRIP_TRAILING_WHITESPACE
    )


configure_file(src/injected_version.h.in ${CMAKE_CURRENT_BINARY_DIR}/src/injected_version.h @ONLY)


add_library(${library_name} SHARED src/version.c)
target_include_directories(${library_name} PUBLIC include PRIVATE src ${CMAKE_CURRENT_BINARY_DIR}/src)
