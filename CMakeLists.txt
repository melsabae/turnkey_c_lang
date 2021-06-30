cmake_minimum_required(VERSION 2.8.12)

set(project_name turnkey)

project(${project_name})

add_subdirectory(lib)
add_subdirectory(doc)
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)

