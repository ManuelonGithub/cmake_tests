# CMAKE - Cross Dependency

This is another simple scenario where the application has two dependencies, srcA and srcB, and at the same time srcB depends on srcA.

Project Has the following file structure:
```
    .
    |- srcA
    |   |- srcA.cpp
    |   |- srcA.h
    |   |- CMakeLists.txt
    |
    |- srcB
    |   |- srcB.cpp
    |   |- srcB.h
    |   |- CMakeLists.txt
    |
    |- main.cpp
    |- CMakeLists.txt
```

But the following dependency graph:
```
    srcA --- srcB --- main
     |_________________/
```

To accomplish this the addition of srcA as a library to the build must be done before srcB.
This is done by have ordered add_subdirectory() declarations

Inside the srcB CMakeLists file the srcA library dependency must be declared (via `target_link_libraries(srcB PRIVATE srcA)`)

A bit of a hack is done inside srcB's cmake file in order to cleanly reference srcA in the code
The line `target_include_directories(srcB PRIVATE ${PROJECT_SOURCE_DIR})` was added so inside the C++ code we can reference srcA "normally" -> `#include "srcA/srcA.h"`

This is a hack for sure - a better solution is to have a more organized folder structure ...


## Building and Running Scenario

Following steps are recommended (commands are done inside cross_dependency directory):
```
    cmake -S . -B ./build
    cmake --build build

    ./build/cross_depend
```