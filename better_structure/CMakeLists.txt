# Declares minimum cmake version 
# it's standard to put in but unnecessary in most scenarios
cmake_minimum_required(VERSION 3.12)

project(better_struct)

# add all directories that have a cmake file in them
# order is no longer important - just remember to include them 
add_subdirectory(app)
add_subdirectory(srcA)
add_subdirectory(srcB)
