#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
	std::vector<int> v{2, 3, 5};
	std::for_each(v.begin(), v.end(), [] (int &z) { z--; });
	for (int x : v) std::cout << x << ' ';
	std::cout << std::endl;
	return 0;
}

// vim: ts=4 sw=4
