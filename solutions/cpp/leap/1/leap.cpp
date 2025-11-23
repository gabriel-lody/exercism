#include "leap.h"

namespace leap {

	int is_leap_year(int iYear)
	{

		if(iYear % 2 == 0)

			if(iYear % 4 == 0)

				if(iYear % 100 == 0)

					if(iYear % 400 == 0)

						return -1;

					else

						return 0;

				else

					return -1;

			else

				return 0;

		else

			return 0;

	}

}  // namespace leap
