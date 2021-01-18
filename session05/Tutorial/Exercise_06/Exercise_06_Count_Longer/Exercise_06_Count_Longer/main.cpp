#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> read_istream(istream& in) {
	vector<string> v;
	string s;
	while (cin >> s) {
		v.push_back(s);
	}
	return v;
}

void write_ostream(ostream& out, const vector<string>& v) {
	out << "The numbers in the list are: ";
	for (const auto s : v) {
		out << " " << s;
	}
	out << '\n';
}

int count_longer(const vector<string> &v, int n) {
	return count_if(v.cbegin(), v.cend(),
		[n](const string& s) {return s.size() > n; });
}

int main() {
	cout << "Please enter numbers in to the list: " << '\n';
	vector<string> text = read_istream(cin);


	cout << "Exercise 6: " << '\n';

	//count_longer(text, 2);
	//write_ostream(cout, text);
	cout << count_longer(text, 2);

	return 0;
}