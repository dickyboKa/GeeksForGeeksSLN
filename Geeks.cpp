#include <iostream>
#include <vector>
#include "Greedy/CodingProblem.h"
int main()
{
	int nr = 6, dr = 14;
	std::cout << "Egyptian Fraction Representation of "
		<< nr << "/" << dr << " is\n ";
	printEgyptianFraction(nr, dr);
	return 0;
}


