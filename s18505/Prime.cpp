#include "Prime.hpp"

namespace s18505 {

bool is_prime(unsigned long int x)
{
	if (x == 0)
		return false;

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}

}
