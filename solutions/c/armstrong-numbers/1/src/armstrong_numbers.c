#include <math.h>

#include "armstrong_numbers.h"


int is_armstrong_number(int candidate)
{

	int iArmstrong = 0;

	int iBase = 0;

	int iExponent = 0;

	int iPower = 0;

	int iResult = 0;

	iArmstrong = candidate;

	while(iArmstrong != 0)
	{

		iArmstrong /= 10;

		iExponent++;

	}

	iArmstrong = candidate;

	while(iArmstrong != 0)
	{

		iBase = iArmstrong % 10;

		iPower = (int)pow(iBase, iExponent);

		iResult += iPower;

		iArmstrong /= 10;

	}

	return candidate == iResult;

}
