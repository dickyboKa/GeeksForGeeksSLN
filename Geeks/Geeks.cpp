#include <iostream>
#include <vector>
#include <iterator>
#include "Searching/Queries.h"

using namespace std;


int main()
{
	vector<int> a = { 1, 4, 3, 2 };
	vector<pair<int, int>> Q = {
		make_pair(0, 5),
		make_pair(1, 3),
		make_pair(0, 3)
	};
	vector<int> r = getQuerries(a, Q);
	copy(r.cbegin(), r.cend(), ostream_iterator<int>(cout, ", "));
	return 0;
}


