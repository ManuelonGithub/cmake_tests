


#include <iostream>
#include "other_src.h"

int init_app()
{
	return 42;
}

int main(void)
{
	std::cout << "app init" << std::endl;

	int param = init_app();

	run_app(param);

	std::cout << "app end" << std::endl;
	
	return 0;
}