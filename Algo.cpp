#include <iostream>
#include <vector>
#include "Greedy/JobSequencing.h"

int main()
{
	std::vector<Job> jobs = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15} };
	printJobScheduling(jobs);
}

