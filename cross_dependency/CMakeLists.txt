# Declares minimum cmake version 
# it's standard to put in but unnecessary in most scenarios
cmake_minimum_required(VERSION 3.12)

# Gives the project a name - seems mandatory ?
# Either way allows you to then use ${PROJECT_NAME} for the rest of the script
project(cross_depend)

# will add subdirectories  to the cmake execution "search path"
# so if the subdirectory has a cmakelist file, it'll get processed
add_subdirectory(srcA)
add_subdirectory(srcB)

# declares the executable name (${PROJECT_NAME}) and the source files (main.cpp)
add_executable(${PROJECT_NAME} main.cpp)

# Links specific project libraries into the executable
target_link_libraries(${PROJECT_NAME} srcA srcB)