# CMAKE - Better File Structure

This is an example of a better file structure, and how it consequently allows you have a better cmake structure

Project Has the following file structure:
``` .
	|- app
	|	|- include
	|	|	|- other_src.h
	|	|- main.cpp
	|	|- other_src.cpp
	|	|- CMakeLists.txt
	|
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
    |- CMakeLists.txt
```
Features of note:
*	In app->CMakeLists, `target_include_directories(${PROJECT_NAME} PRIVATE include)` allows the .cpp files in app/ to include files in the "include" folder directly (`#include ".h"` vs. `#include "include/.h"`)
*	By having the header of the srcX library under include/lib/ + having `target_include_directories(srcA PUBLIC include)` in the CMakeLists allows you to reference the header file via `#include "lib/.h"`
	*	This will work for any file that depends on said library + will NOT cause conflicts if other libraries have the same structure
*	having a top-level CMakeLists allows you to mass compile all libraries + applications in one sweep and will place the application binaries into its own directory separate from the build files/artifacts


## Building and Running Scenario

Following steps are recommended (commands are done inside better_structure directory):
```
    cmake -S . -B ./build
    cmake --build build

    ./build/app/better_struct
```