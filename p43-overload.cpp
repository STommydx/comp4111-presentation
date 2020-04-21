#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

class Foo {
	private:
		int x;
	public:
		Foo(int x) : x(x) {}
		int operator()(int l, int r) { return (l + r) % x; }
};

int main() {
	std::vector<int> v{2, 5, 6};
	std::cout << std::reduce(v.begin(), v.end(), 0, Foo(7)) << ' ';
	std::cout << std::reduce(v.begin(), v.end(), 0, Foo(8)) << std::endl;
	return 0;
}

// vim: ts=4 sw=4
