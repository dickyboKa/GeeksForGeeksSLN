#include <iostream>
#include <vector>
#include <iterator>
#include "Mathematical/Combinations.h"

using namespace std;


int main()
{
	vector<int> a = { 1,2,3 };
	int jobs = 11;
	cout << minimumTimeToFinishJob(a, jobs);
	return 0;
}


