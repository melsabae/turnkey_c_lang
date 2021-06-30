# turnkey_repo
The Repo

Is a basic repo for making an application.
Internally has a "version" library which grabs git and date information. It's not complete. It's probably insufficient.
The version library depends on gtest.

The default .gitignore includes a "build" entry. You can make a directory named build and build there without git trying to version binaries.

doc/ -- Incomplete. Intended to be a place for documentation to be built. Would now be in a built tree instead. Not implemented.

include/ -- Public include files this application might make available.

lib/ -- for other library dependencies this repo will need, that will be compiled in the same tree.
    External libraries can be had by using add_library(... SHARED/STATIC IMPORTED) then using set_target_properties(... PROPERTIES IMPORTED_LOCATION /path/to/lib.{whatever})
    After that, you can just use target_link_libraries(target ...) to link
    Essentially, lib/ is for libraries that will live in this tree, as an internal library or as a git submodule


src/ -- Private include files, and all source files for your application.

test/ -- For your tests.
