#include <iostream>
#include <vector>
#include "Searching/SearchElement.h"

using namespace std;


int main()
{
	vector<int> a = { 1, 2, 3, 4, 5, 4 };
	int r = searchElement(a, 3);
	cout << r << endl;
	return 0;
}


