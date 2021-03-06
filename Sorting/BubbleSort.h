#include <vector>

template <class ForwardIter>
void bubbleSort(ForwardIter beg, ForwardIter end)
{
	while (true)
	{
		bool swap = false;
		auto it_a = beg;
		auto it_b = it_a + 1;
		for (; it_b != end; ++it_b)
		{
			if (*it_b < *it_a)
			{
				swap = true;
				std::iter_swap(*it_b, *it_a);
			}
			++it_a;
		}

		if (!swap)
			break;
	}
}