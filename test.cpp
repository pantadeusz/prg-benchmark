#include "s18505/Prime.hpp"
#include "s18563/lab13-zd.hpp"
#include "s19616/IsThatRealPrime.hpp"
#include "s19376/zd.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

#include <iostream>
#include <chrono>
#include <functional>
#include <vector>

// szkielet funkcji main z s18505
int main()
{
	using namespace std;
	unsigned long int x;
	struct benchmark_s
	{
		double summary_time;
		std::string name;
		std::function<bool(long int)> f;
	};
	std::vector<benchmark_s> tests = {
		{.summary_time = 0.0,
		 .name = "s19376",
		 .f = [](long int x) { return s19376::is_prime(x); }},
		{.summary_time = 0.0,
		 .name = "s19616",
		 .f = [](long int x) { return s19616::is_prime(x); }},
		{.summary_time = 0.0,
		 .name = "s18563",
		 .f = [](long int x) { return s18563::isPrime(x); }},
		{.summary_time = 0.0,
		 .name = "s18505",
		 .f = [](long int x) { return s18505::is_prime(x); }}};

	std::random_device r;
	std::default_random_engine e1(r());
	std::uniform_int_distribution<int> uniform_dist(1000000, 9999999);

	for (int i = 0; i < 1000; i++)
	{
		long int x = uniform_dist(e1);
		std::vector<bool> voting;
		for (auto &e : tests)
		{
			auto start = chrono::system_clock::now();
			bool result = e.f(x);
			auto end = chrono::system_clock::now();
			voting.push_back(result);
			chrono::duration<double> diff = end - start;
			e.summary_time += diff.count();
		}
		// weryfikacja wynikow
		bool r = voting.back();
		for (auto v : voting)
		{
			if (v != r)
			{
				for (auto vote : voting)
				{
					std::cout << " v:" << (vote ? "T" : "N");
				}
				std::cout << "  FOR: " << x << std::endl;
				break;
			}
		}
	}
	for (auto &e: tests) {
		std::cout << "Engine:" << e.name << ": " << e.summary_time << std::endl;
	}
	return 0;
}
