#include "stats.h"
#include <iostream>
#include <vector>

using namespace std;

// read numbers from the standard input
// and store them in a vector
vector<double> read_vector(istream& in) {
	vector<double> v;
	double x;
	while (cin >> x)
		v.push_back(x);
	return v;
}


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
		cout << "average without highest and lowest = " << score(values) << '\n';
	}
	return 0;
}