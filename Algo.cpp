#include <iostream>
#include <vector>
#include "Greedy/JobSequencing.h"

int main()
{
	std::vector<int> loss = { 1, 2, 3, 5, 6 };
	std::vector<int> time = { 2, 4, 1, 3, 2 };
	printJobSchedulingWithMinimumLoss(loss, time);
}

