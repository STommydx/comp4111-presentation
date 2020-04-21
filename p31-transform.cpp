#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> v{1, 2, 3}, u(v.size());
	std::transform(v.begin(), v.end(), u.begin(), [] (int x) { return x + 1; });
	for (int x : u) std::cout << x << ' ';
	std::cout << std::endl;
	return 0;
}

// vim: ts=4 sw=4
