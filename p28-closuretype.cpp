#include <iostream>
using namespace std;

template <class T>
void f(T g) {
	cout << g(5) << endl;
}

int main() {
	f([](int x) { return x; });
	return 0;
}

// vim: ts=4 sw=4
