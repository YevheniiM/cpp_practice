#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;


template <typename T>
void sum(vector<T>& v1, vector<T>& v2)
{
	if (v1.size() != v2.size())
	{
		throw std::invalid_argument("First vector should be the same size as the second one or bigger.");
	}

	auto len = v1.size();
	for (auto i = 0; i < len; ++i)
	{
		v1[i] += v2[i];
	}
}

template <typename T>
void print_collection(const vector<T> v)
{
	for (auto i = v.begin(); i != v.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << '\n';
}
