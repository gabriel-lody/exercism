#include "leap.h"

namespace leap {

	bool is_leap_year(int iYear)
	{
		return (!(iYear % 4) && iYear % 100) || !(iYear % 400);
	}

}  // namespace leap
