

#include <iostream>

#include "other_src.h"
#include "lib/srcA.h"
#include "lib/srcB.h"

void run_app(int param)
{
	std::cout << "src A result = " << srcA_exec(param) << std::endl;
	std::cout << "src B result = " << srcB_exec(param) << std::endl;
}