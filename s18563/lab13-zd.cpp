#include "lab13-zd.hpp"

namespace s18563
{

bool isPrime(unsigned long int x) {
	for (unsigned int i = 2; i <= x / 2; ++i)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

}