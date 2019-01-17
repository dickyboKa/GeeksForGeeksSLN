#include <iostream>
#include <vector>
#include "Searching/CommonElement.h"

using namespace std;


int main()
{
	vector<int> a = { 1, 5, 10, 20, 40, 80 };
	vector<int> b = { 6, 7, 20, 80, 100 };
	vector<int> c = { 3, 4, 15, 20, 30, 70, 80, 120 };

	vector<int> result = findCommonElement(a, b, c);

	cout << "Common Values Are: " << endl;
	for (auto it = result.cbegin(); it != result.cend(); ++it)
		cout << *it << endl;
	
	return 0;
}


