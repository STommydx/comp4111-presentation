#include <iostream>
using namespace std;

int main() {
	cout << [](int x, int y) { return x + y; } (1, 2) << endl;
	cout << [](auto p) { return p(1); } ([](int x) {return x + 2; }) << endl;
	cout << [](int x) { return [x](int y) { return x + y; }; } (1)(2) << endl;
	return 0;
}

// vim: ts=4 sw=4
