#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <string>

using namespace std;

bool space(char c) {
	return isspace(c);
}

vector<string> split_words(const string &s) {
	vector<string> v;
	auto start = find_if_not(s.cbegin(), s.cend(), space);
	while (start != s.cend()) {
		auto end = find_if(start, s.cend(), space);			// Keep notice of which of the algorithm being used : Find, Find_if, Find_if_not
		// string word(start, end)
		v.push_back(string(start, end));
		start = find_if_not(end, s.cend(), space);
	}
	return v;
}

int main() {
	string line = " This is a   line   with    some      words in   it    ";
	vector<string> v = split_words(line);
	for (const auto& s : v)
		cout << s << '\n';
	return 0;
}