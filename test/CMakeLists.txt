add_executable(null_test null_test.cpp)

# linkage needed for gtest
target_link_libraries(null_test gtest gmock gtest_main pthread)

# linkage needed otherwise
target_link_libraries(null_test m)

