#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	cout << "Please enter a series of numbers\n";

	// read numbers from the standard input
	// and store them in a vector
	vector<double> values;
	double x;
	while (cin >> x)
		values.push_back(x);

	// compute and output results
	auto n = values.size();
	cout << n << " numbers\n";
	if (n > 0) {
		// compute the average
		double sum = 0;
		typedef vector<double>::size_type vec_size;
		for (vec_size i = 0; i < values.size(); ++i)
			sum += values[i];
		cout << "average = " << sum/n << '\n';

		// sort the whole vector
		sort(values.begin(), values.end());

		// find the middle value
		auto middle = n/2;
		double median;
		if (n%2 == 1) // size is odd
			median = values[middle];
		else // size is even
			median = (values[middle-1] + values[middle])/2;
		cout << "median = " << median << '\n';
	}
	return 0;
}
