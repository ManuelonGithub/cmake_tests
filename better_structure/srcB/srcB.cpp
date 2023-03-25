
#include "lib/srcA.h"
#include "srcB.h"

float srcB_exec(int param)
{
	return static_cast<float>(srcA_exec(param))/param;
}