

# declares the existance of a library
# will be compiled separately and linked into the bin
add_library(srcA)

# setting a variable src_files will all .cpp files in the lib
set(src_files 
	${CMAKE_CURRENT_LIST_DIR}/srcA.cpp
	# more files would go here
)

# setting a variable in_files will all .h files in the lib
set(inc_files 
	${CMAKE_CURRENT_LIST_DIR}/include/lib/srcA.h
	# more files would go here
)

# declaring the files in the library - 
target_sources(srcA
	PRIVATE ${src_files}
	PUBLIC ${inc_files}
)

# this allows you to do #include "lib/srcA.h" when outside the library scope/source files
target_include_directories(srcA PUBLIC include)

# this allows you to do #include "srcA.h" when inside the library scope/source files
target_include_directories(srcA PRIVATE include/lib)