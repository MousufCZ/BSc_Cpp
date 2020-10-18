#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Write and test functions to find the maximum 
// and minimum elements of a vector of doubles.

vector<double> read_vector(istream& in) {
	vector<double> v;
	double x;
	while (cin >> x)
		v.push_back(x);
	return v;
}

double max(const vector<double>& v) {
	typedef vector<double>::size_type inputVec_size;
	const inputVec_size n = v.size();
	if (n == 0)
		throw domain_error("empty vector is empty");
	double maximum = v[0];
	for (inputVec_size i = 1; i < n; ++i)
		if (v[i] > maximum)
			maximum = v[i];
	return maximum;
}

double min(const vector<double>& v) {
	typedef vector<double>::size_type inputVec_size;
	const inputVec_size n = v.size();
	if (n == 0) {
		throw domain_error("vector is empty");
	}
	double minimum = v[0];
	for (inputVec_size i = 1; i < n; ++i) {
		if (v[i] < minimum) {
			minimum = v[i];
		}
	}
	return minimum;
}



int main(){
	cout << "Please enter a series of numbers\n";
	const auto values = read_vector(cin);

	cout << "Minimum number in the vector: " << min(values) << '\n';
	cout << "Maximum number in the vector: " << max(values) << '\n';

	return 0;
}