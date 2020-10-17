#include "stats.h"
#include "read.h"
#include <iostream>
#include <vector>

using namespace std;


int main() {
	cout << "Please enter a series of numbers\n";
	const auto values = read_vector(cin);

	// compute and output results
	const auto n = values.size();
	cout << n << " numbers\n";
	if (n > 0) {

		// compute the average and median
		cout << "average = " << average(values) << '\n';
		cout << "median = " << median(values) << '\n';
	}
	return 0;
}