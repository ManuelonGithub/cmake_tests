
#include "srcB.h"
#include "srcA/srcA.h"
#include <iostream>

int srcB_run(int param)
{
    int srcA = srcA_run(param);

    // std::cout << "SRC B run: " << param/2 << std::endl;

    std::cout << "SRC B run: " << param/2  << " vs. SRC A run: " << srcA << std::endl;

    return param / 2;
}
