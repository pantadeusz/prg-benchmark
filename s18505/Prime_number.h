#include "pch.h"
#include <iostream>
#include <chrono>

using namespace std;

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

int main()
{
	unsigned long int x;

	cout << "Enter a number: ";
	cin >> x;
	
	auto start = chrono::system_clock::now();

	if (is_prime(x) == false)
	{
		cout << endl << "Your number is not a prime number" << endl;
	}
	else
	{
		cout << endl << "Your number is a prime number" << endl;
	}

	auto end = chrono::system_clock::now();
	chrono::duration<double> diff = end - start;

	cout << "The program checked your number in " << diff.count() << " seconds." << endl;
	
}