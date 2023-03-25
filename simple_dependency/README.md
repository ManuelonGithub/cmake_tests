# CMAKE - Simple Dependency

This is the simplest scenario of having code outside of the base directory.

Seems CMake prefers a recursive system, where each directory is a library with its own cmake file.

The intended solution is for project cmake file to explicitly declare its dependency on different libraries and reference their cmake file via add_subdirectory()

## Building and Running Scenario

Following steps are recommended (commands are done inside simple_dependency directory):
```
    cmake -S . -B ./build
    cmake --build build

    ./build/simple_depend
```