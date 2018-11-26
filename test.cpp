#include "s18505/Prime.hpp"
#include "s18563/lab13-zd.hpp"
#include "s19616/IsThatRealPrime.hpp"
#include "s19376/zd.hpp"
#include <iostream>
#include <chrono>

// szkielet funkcji main z s18505
int main()
{
    using namespace std;
	unsigned long int x;

	cout << "Enter a number: ";
	cin >> x;
	
	auto start = chrono::system_clock::now();

    s19376::is_prime(x);
    s19616::is_prime(x);
    s18563::isPrime(x);
	if (s18505::is_prime(x) == false)
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
