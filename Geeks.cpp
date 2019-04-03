#include <iostream>
#include <vector>
#include "Greedy/CodingProblem.h"


int main()
{
	std::vector<Job> jobs = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
				   {'d', 1, 25}, {'e', 3, 15} };
	std::cout << "Following is maximum profit sequence of jobs" << std::endl;
	printJobScheduling(jobs);
	return 0;
}


