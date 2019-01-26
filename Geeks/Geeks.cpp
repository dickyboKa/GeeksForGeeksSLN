#include <iostream>
#include "Searching/SmallestElement.h"

using namespace std;


int main()
{
	
	int k;
	cin >> k;
	cout << "K is " << k <<endl;

	LimMinSet<int> m_set(k);
	int n;
	cout << "Enter next element of stream ";
	while (cin >> n)
	{
		m_set.insert(n);
		m_set.printLargestElement();
		cout << "Enter next element of stream ";
	}
	cout << "CTRL + C Pressed";
	return 0;
}


