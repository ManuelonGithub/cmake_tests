

# declares the executable name (${PROJECT_NAME}) and the source files (main.cpp)
add_executable(${PROJECT_NAME} 
	main.cpp 
	other_src.cpp
	# more sources go here ...	
)

# allows the application sources to reference their header directly (#include ".h" instead of #include "include/.h")
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Links specific project libraries into the executable
target_link_libraries(${PROJECT_NAME} srcA srcB)
