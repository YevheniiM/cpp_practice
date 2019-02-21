#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::vector;
using std::cout;


template <typename R, typename T, typename U>
R sum_of_product(vector<T>& vt, vector<U>& vu)
{
	auto sum = 0;
	auto len = vu.size();
	for (size_t i = 0; i < len; ++i)
	{
		sum += vt[i] * vu[i];
	}
	return sum;
}