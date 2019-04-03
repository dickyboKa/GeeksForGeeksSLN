bool oppositeSign(int x, int y)
{
	return (x ^ y) < 0;
}

int addOne(int x)
{
	int flipper = 1;

	while (x & flipper) // flip all the trailing 1 to 0
	{
		x = x ^ flipper;
		flipper = flipper << 1; // shift the 1 to the right to cover all the one.
	}

	// if no more 1 to flip. lastly flip zero to 1
	return x ^ flipper;
}