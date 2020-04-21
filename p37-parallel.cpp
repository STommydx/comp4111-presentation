#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <execution>

int main() {
	const int N = 10'000'000;
	std::vector<int> v(N); std::iota(v.begin(), v.end(), 0);
	std::cout << std::reduce(std::execution::par, v.begin(), v.end(), 0, std::gcd<int, int>) << std::endl;
	return 0;
}

// vim: ts=4 sw=4
