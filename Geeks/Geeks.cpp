#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "Sorting/CodingProblems.h"


int main()
{
	std::vector<int> c = { 100, 56, 5, 6, 102, 58, 101, 57, 7, 103, 59 };

	std::cout << countConsecutiveNumberSubset(c);
	return 0;
}


