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

// reverse vector
void reverse (vector<double> v) {
	typedef vector<double>::size_type revVec_size;
	for (int lo = 0, hi = v.size() - 1; lo < hi; ++lo, --hi) {
		swap(v[lo], v[hi]);
	}
}

int main() {



	cout << "Please enter a series of numbers\n";
	const auto values = read_vector(cin);

	cout << "Vector in reverse order: " << reverse(values) << '\n';

	return 0;
}