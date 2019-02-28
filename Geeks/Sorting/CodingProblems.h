#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <iostream>
#include <queue>
#include <array>

void sortByFrequencey(std::vector<int> &a)
{
	std::map<int, int> m;
	for (auto it = a.cbegin(); it != a.cend(); ++it)
	{
		auto m_it = m.insert(std::make_pair(*it, 1));
		if (m_it.second == false)
			m_it.first->second++; // if the value aready present up the count;
	}
	std::vector<std::pair<int, int>> temp;
	for (auto it = m.cbegin(); it != m.cend(); ++it)
	{
		temp.push_back(std::make_pair(it->first, it->second));
	}

	std::sort(temp.begin(), temp.end(), [](std::pair<int, int> a, std::pair<int, int> b) {
		return a.second > b.second;
	});
	a.clear();
	for (auto it = temp.cbegin(); it != temp.cend(); ++it)
		for (int i = it->second; i > 0; --i)
			a.push_back(it->first);
}

// return index of unsorted array, left to righ
std::pair<int, int> foundUnsortedArray(std::vector<int> &a)
{
	std::vector<int> temp = a;
	std::sort(temp.begin(), temp.end());

	int i = 0;
	int j = a.size() - 1;
	int left_index = i;
	int right_index = j;
	bool foundi = false;
	bool foundj = false;
	while (i < j)
	{	 
		if (temp[i] != a[i] && !foundi)
		{
			left_index = i;
			foundi = true;
		}
		
		if (temp[j] != a[j] && !foundj)
		{
			right_index = j;
			foundj = true;
		}
		++i;
		--j;
	}

	return std::make_pair(left_index, right_index);
}

// check if array b is a subset of array a
bool subsetArray(std::vector<int> a, std::vector<int> b)
{
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());

	auto jt = b.cbegin();
	bool subset = false;
	for (auto it = a.cbegin(); it != a.cend(); ++it)
	{
		if (jt == b.cend())
		{
			subset = true;
			break;
		}

		if (*it == *jt)
			++jt;
	}
	return subset;
}

// sort number with min heap
void sortPriorityQueue(std::vector<int> &arr)
{
	std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
	for (auto it = arr.cbegin(); it != arr.cend(); ++it)
		pq.push(*it);

	arr.clear();
	while (!pq.empty())
	{
		arr.push_back(pq.top());
		pq.pop();
	}

}

// found number pair which have this rule x^y > y^x (x taken from array A, y taken from array B)
void foundNumberPair(std::vector<int> a, std::vector<int> b)
{
	std::vector<std::pair<int, int>> result;
	//if y > x then x^y > y^x with some exception;
	std::array<std::array <int, 5>, 5> tableException =
	{ {
		{0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0},
		{1, 1, 0, 0, 0},
		{1, 1, 1, 0, 1},
		{1, 1, 0, 0, 0},
	} };

	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());

	std::vector<std::pair<int, int>> indexOfResult;
	for (int i = 0; i < a.size(); ++i)
	{
		auto it = std::upper_bound(b.begin(), b.end(), a[i]);
		int index = it - b.begin();
		if (!((a[i] < 5 && *it < 5) && !tableException[a[i]][*it]))
			indexOfResult.push_back(std::make_pair(a[i], index));
	}

	for (auto it = indexOfResult.begin(); it != indexOfResult.end(); ++it)
	{
		for (int i = it->second; i < b.size(); ++i)
			result.push_back(std::make_pair(it->first, b[i]));
	}

	for (auto it = result.begin(); it != result.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;

}