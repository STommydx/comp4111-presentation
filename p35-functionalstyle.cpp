#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

template <class Func>
auto myreduce(Func f) {
	return [&f] (int init) {
		return [&f, &init] (const std::vector<int> &v) {
			return std::reduce(v.begin(), v.end(), init, f);
		};
	};
}

template <class Func>
auto mymap(Func f) {
	return [&f] (const std::vector<int> &v) {
		std::vector<int> u(v);
		std::transform(v.begin(), v.end(), u.begin(), f);
		return u;
	};
}

int main() {
	auto addm7 = [] (int x, int y) { return (x + y) % 7; };
	auto add1 = [] (int x) { return x + 1; };
	std::cout << myreduce(addm7)(0)(mymap(add1)({2, 3, 5})) << std::endl;
	return 0;
}

// vim: ts=4 sw=4
