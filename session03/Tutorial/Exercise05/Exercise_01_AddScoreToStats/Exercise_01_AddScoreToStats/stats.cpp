#include "stats.h"
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

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
double average(const vector<double>& v) {
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

// Average without highest and lowest 
double score(vector<double> v) {
	typedef vector<double>::size_type scoreVec_size;
	const scoreVec_size n = v.size();
	if (n > 0) {
		sort(v.begin(), v.end());				// Sort the vector
	}
	else {
		throw domain_error("vector is empty");	// If vector empty, return domain error
	}

	// Average without highest and lowest
	double sum = 0;
	for (scoreVec_size i = 1; i < n - 1; ++i) {
		sum += v[i];
		return sum / (n - 2);
	}
}