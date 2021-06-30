add_executable(${project_name} main.c)

target_include_directories(
    ${project_name}
    PUBLIC ${CMAKE_HOME_DIRECTORY}/include
    PRIVATE ${CMAKE_HOME_DIRECTORY}/src
    )

target_link_libraries(${project_name} version)

