## configure_file(file.h.in ${CMAKE_CURRENT_BINARY_DIR}/file.h @ONLY)
#
## create test(s)
#add_executable(test_turnkey test_turnkey.cpp ${CMAKE_HOME_DIRECTORY}/src/turnkey.c)
#
## pull in some includes from the application
#target_include_directories(test_turnkey PRIVATE ${CMAKE_HOME_DIRECTORY}/include)
#
## link the testing libraries, and any others we might need
#target_link_libraries(test_turnkey gtest gtest_main)
