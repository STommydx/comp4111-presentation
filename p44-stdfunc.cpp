#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
	std::vector<std::function<int(int)>> v;
	v.emplace_back([] (int x) { return x + 5; });
	v.emplace_back([] (int x) { return x * 3; });
	v.emplace_back([] (int x) { return x % 6; });
	int res = 0;
	for (auto f : v) res = f(res);
	std::cout << res << std::endl;
	return 0;
}

// vim: ts=4 sw=4
