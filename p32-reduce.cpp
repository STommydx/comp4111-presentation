#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
	std::vector<int> v{2, 3, 5};
	std::cout << std::reduce(v.begin(), v.end(), 0, [] (int x, int y) { return (x + y) % 7; }) << std::endl;
	return 0;
}

// vim: ts=4 sw=4
