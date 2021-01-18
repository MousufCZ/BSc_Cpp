#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Split a string containing comma-separated values
vector<string> split_csv(const string& s) {
	vector<string> v;
	auto comma = find(s.cbegin(), s.cend(), ',');
	v.push_back(string(s.cbegin(), comma));
	while (comma != s.cend()) {
		auto start = ++comma;
		comma = find(start, s.cend(), ',');
		v.push_back(string(start, comma));
	}
	return v;
}

int main() {
	// more to go here
	return 0;
}
