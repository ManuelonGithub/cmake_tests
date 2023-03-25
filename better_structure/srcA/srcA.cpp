

#include "srcA.h"

int srcA_exec(int param)
{
	int ret = 0;
	for (int i = 1; i < param; i++) {
		ret += i;
	}
	
	return ret;
}