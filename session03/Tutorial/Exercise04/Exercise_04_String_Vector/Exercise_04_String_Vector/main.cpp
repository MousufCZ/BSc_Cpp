#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

/* Write and test a function to write out a vector of 
   doubles to a given output stream
*/

vector<double> read_vector(istream& in) {
	vector<double> v;
	double x;
	while (cin >> x) {
		v.push_back(x);
	}
	return v;
}

// Output vector to the given output stream
void write_vector(const vector<double> &v, ostream& output) {
	for (double d : v) {
		output << d << ' ';
	}
	output << '/n';
}

int main() {



	cout << "Please enter a series of numbers\n";
	const auto values = read_vector(cin);
	write_vector(values, cout);

	return 0;
}