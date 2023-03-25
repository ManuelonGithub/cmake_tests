

# declares the existance of a library
# will be compiled separately and linked into the bin
add_library(srcB)

# setting a variable src_files will all .cpp files in the lib
set(src_files 
    ${CMAKE_CURRENT_LIST_DIR}/srcB.cpp
	# more files would go here
)

# setting a variable in_files will all .h files in the lib
set(inc_files 
    ${CMAKE_CURRENT_LIST_DIR}/include/lib/srcB.h
)

# declaring the files in the library - 
target_sources(srcB
	PRIVATE ${src_files}
	PUBLIC ${inc_files}
	# more files would go here
)

# this allows you to do #include "lib/srcB.h" when outside the library scope/source files
target_include_directories(srcB PUBLIC include)

# this allows you to do #include "srcB.h" when inside the library scope/source files
target_include_directories(srcB PRIVATE include/lib)

# declare dependency of srcA library
# private to srcB - meaning that you can't access srcA by including srcB as a library
target_link_libraries(srcB PRIVATE srcA)
