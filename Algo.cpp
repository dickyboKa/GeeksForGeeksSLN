#include <iostream>
#include <vector>
#include "Mathematical/GCD.h"

int main()
{
	std::vector<int> numbers = { 2, 4, 6, 8, 16 };
	std::cout << gcd(numbers);
}

