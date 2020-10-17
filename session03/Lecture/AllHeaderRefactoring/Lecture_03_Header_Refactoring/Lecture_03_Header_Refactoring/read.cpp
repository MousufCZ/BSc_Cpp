#include "read.h"
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