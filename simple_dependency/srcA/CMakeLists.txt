

# declares the existance of a library
# will be compiled separately and linked into the bin
add_library(srcA)

# setting a variable src_files will all .cpp files in the lib
set(src_files 
    ${CMAKE_CURRENT_LIST_DIR}/srcA.cpp
)

# setting a variable in_files will all .h files in the lib
set(inc_files 
    ${CMAKE_CURRENT_LIST_DIR}/srcA.h
)

# declaring the files in the library
target_sources(srcA
	PRIVATE ${src_files}
	PUBLIC ${inc_files}
)
