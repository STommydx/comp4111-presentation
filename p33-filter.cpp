#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
	std::vector<int> v{2, 3, 4, 5, 6}, u;
	std::copy_if(v.begin(), v.end(), back_inserter(u),
	             [] (int x) { return std::gcd(x, 4) > 1; });
	for (int x : u) std::cout << x << ' ';
	std::cout << std::endl;
	return 0;
}

// vim: ts=4 sw=4
