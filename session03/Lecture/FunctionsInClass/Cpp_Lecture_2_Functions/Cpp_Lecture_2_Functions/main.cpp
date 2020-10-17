#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

// read numbers from the standard input
// and store them in a vector
vector<double> read_vector(istream &in) {
	vector<double> v;
	double x;
	while (cin >> x)
		v.push_back(x);
	return v;
}


// Median of the values in the vector
// requires:	call copy of vector if it has more then 1 value in it
//				v.size() > 0
double median(vector<double> v) {
	auto n = v.size();
	// Throw error if vector is empty
	if (n == 0) {
		throw domain_error("The vector is empty");
	}
	// sort the whole vector
	sort(v.begin(), v.end());

	// find the middle value
	const auto middle = n / 2;
	if (n % 2 == 1) // size is odd
		return v[middle];
	else // size is even
		return (v[middle - 1] + v[middle]) / 2;
}

// Average of the values in the vector
// requires:	call copy of vector if it has more then 1 value in it
//				v.size() > 0
double average(const vector<double> &v) {
	const auto n = v.size();
	double sum = 0;
	// Throw error if vector is empty
	if (n == 0) {
		throw domain_error("The vector is empty");
	}

	typedef vector<double>::size_type vec_size;
	for (vec_size i = 0; i < v.size(); ++i)
		sum += v[i];
	return sum / n;
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
	}
	return 0;
}