#include "leap.h"

namespace leap {

	int is_leap_year(int iYear)
	{
		if(iYear % 4 == 0)
			if(iYear % 100 == 0)
				if(iYear % 400 == 0)
					return true;
						else
					return false;
			else
				return true;
		else
			return false;
	}

}  // namespace leap
