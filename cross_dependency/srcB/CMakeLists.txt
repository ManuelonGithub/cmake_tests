

# declares the existance of a library
# will be compiled separately and linked into the bin
add_library(srcB)

# setting a variable src_files will all .cpp files in the lib
set(src_files 
    ${CMAKE_CURRENT_LIST_DIR}/srcB.cpp
)

# setting a variable in_files will all .h files in the lib
set(inc_files 
    ${CMAKE_CURRENT_LIST_DIR}/srcB.h
)

# declaring the files in the library - 
target_sources(srcB
	PRIVATE ${src_files}
	PUBLIC ${inc_files}
)

# this allows you to do #include "lib/srcB.h" when outside the library scope/source files
target_include_directories(srcB PUBLIC include)

# this allows you to do #include "srcA/srcA.h"
# this is a bit hacky since it gives srcB access to the entire project's scope,
# adding the PRIVATE flag will ensure that only the files within srcB have this kind of info though
target_include_directories(srcB PRIVATE ${PROJECT_SOURCE_DIR})

# declare dependency of srcA library
target_link_libraries(srcB PRIVATE srcA)

