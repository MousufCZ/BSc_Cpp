#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

/* Write and test a function that takes a vector of doubles
	and reverses its contents. You can use
	the library function 'swap' from the <utility> system header:
*/

vector<double> read_vector(istream& in) {
	vector<double> v;
	double x;
	while (cin >> x) {
		v.push_back(x);
	}
	return v;
}

// reverse the content of the vector of double
void reverse (vector<double> &v) {
	//using vec_size = vector<double>::size_type;
	typedef vector<double>::size_type revVec_size;
	revVec_size len = v.size();
	revVec_size mid = len / 2;
	for (revVec_size i = 0; i < mid; ++i ) {
		swap(v[i], v[len-1-i]);
	}
}

int main() {
	cout << "Please enter a series of numbers\n";
	const auto values = read_vector(cin);

	cout << "Vector in reverse order: " << reverse(values) << '\n';

	return 0;
}