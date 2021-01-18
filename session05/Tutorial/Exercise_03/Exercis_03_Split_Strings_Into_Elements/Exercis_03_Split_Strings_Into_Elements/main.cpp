#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


vector<string> read_istream(istream& in) {
	vector<string> v;
	string s;
	while (cin >> s) {
		v.push_back(s);
	}
	return v;
}

void write_ostream(ostream& out, const vector<string> v) {
	out << "The string in the vector are: ";
	for (const auto s : v) {
		out << " " << s;
	}
	out << '\n';
}

vector<string> stringsToElement(string s) {
	auto comma = find(s.cbegin(), s.cend(), ',');
	vector<string> v;
	v.push_back(string(s.cbegin(), comma));

	while (comma != s.cend()) {
		auto start = ++comma;
		comma = find(start, s.cend(), ',');
		v.push_back(string(start, comma));
	}
	return v;
}


int main() {
	/*
	cout << "Enter in vector of strings" << '\n\n';
	vector<string> values = read_istream(cin);
	write_ostream(cout, values);

	cout << "Exercise 3: The string 'abc, , d, ef,' should yield a vector of 5 elements, 'abc', '', 'd', 'ef' and ''." << '\n\n';*/
	vector<string> values = { "abc, , d, ef," };
	stringsToElement(values);
	//write_ostream(cout, s);
	//cout << stringsToElement(values) << '\n';


	return 0;
}