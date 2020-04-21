#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
	const int N = 5;
	std::vector<int> job_ind(N); std::iota(job_ind.begin(), job_ind.end(), 0);
	std::vector<int> job_sta{1, 0, 2, 4, 5};
	std::vector<int> job_fin{3, 2, 9, 8, 6};
	std::sort(job_ind.begin(), job_ind.end(),
				[&job_fin] (int l, int r) { return job_fin[l] < job_fin[r]; });
	for (int i : job_ind) std::cout << i << ' ';
	std::cout << std::endl;
	return 0;
}

// vim: ts=4 sw=4
