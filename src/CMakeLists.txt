set(application_name "default_main")

add_executable(${application_name} main.c)

target_include_directories(
    ${application_name}
    PUBLIC ${CMAKE_HOME_DIRECTORY}/include
    PRIVATE ${CMAKE_HOME_DIRECTORY}/src
    )

target_link_libraries(${application_name} version)

