#include <iostream>
#include <vector>
#include <iterator>
#include "Pattern/KMP.h"


int main()
{
	kmpSearch("ABABDABACDABABCABAB", "ABABCABAB");
	return 0;
}


