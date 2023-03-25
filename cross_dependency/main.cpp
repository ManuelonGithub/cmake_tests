#include <iostream>
#include "srcA/srcA.h"
#include "srcB/srcB.h"

int main(void)
{
    std::cout << "TEST TEST TEST" << std::endl;
    
    srcA_run(10);
    srcB_run(10);

    return 0;
}