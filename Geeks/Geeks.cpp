#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "Searching/ArrayString.h"

using namespace std;


int main()
{
	vector<string> arr = { "for", "", "", "", "geeks", "ide", "",
					 "practice", "" , "", "quiz", "", "" };
	cout << searchStrings(arr, "dicky");
	return 0;
}


