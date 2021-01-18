#include <iostrea>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

bool space(char c) {
	return isspace(c);
}

vector<string> split_words(const string& s) {
	vector<string> v;
	auto start = find_if_not(s.cbegin(), s.cend(), space);
	if (start != s.cend()) {
		auto end = find_if(start, s.cend(), space);
		v.push_back(string(start, end));
		start = find_if_not(end, s.cend(), space);
	}
	return v;
}

int main() {
	string line = " This is a line  jh hj    fds ";
	vector<string> v = split_words(line);
	for (const auto& s : v) {
		cout << s << '\n';
	}
	return 0;
}