#include "pch.h"
#include <iostream>
#include <fstream>
#include <chrono>
#include <vector>

using namespace std;

typedef chrono::high_resolution_clock Clock;

auto tStart = Clock::now();

int primes;
int timed;
bool result;

int stopwatch(int mode) {
	switch (mode) {
		case 1:
			tStart = Clock::now();
			break;

		case 0:
			auto tFinish = Clock::now();
			auto tDuration = chrono::duration_cast<chrono::microseconds>(tFinish - tStart).count();
			return (int)tDuration;
	}
	return 0;
}
/*bool isPrimeList(unsigned long int x) {
	ifstream file("primelist.txt");
	int data;
	vector<int> primelist;
	if (file.is_open()) {
		file >> data;
		while (!file.eof()) {
			primelist.push_back(data);
			file >> data;
		}
		primelist;
	}
	for (auto a : primelist) {
		if (a == x) return true;
	}
	return false;
}*/

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

int main()
{
	setlocale(LC_ALL, "");

	cout << boolalpha;
	cin >> primes;
	stopwatch(1);
	result = isPrime(primes);
	timed = stopwatch(0);
	cout << "'For loop' method: " << result << " Time: " << timed << " microseconds" << endl;
	/*stopwatch(1);
	result = isPrimeList(primes);
	timed = stopwatch(0);
	cout << "'List' method: " << result << " Time: " << timed << " microseconds";*/
}
 