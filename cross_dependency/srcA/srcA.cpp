
#include "srcA.h"
#include <iostream>

int srcA_run(int param)
{
    std::cout << "SRC A run: " << param*param << std::endl;

    return param * param;
}