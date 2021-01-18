#include "student.h"
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
	vector<student> students;
	string s;

	string line;
	while (getline(cin, line)) {
		auto v = split_csv(line);
		students.push_back(student(v[0], stod(v[1])));
		for (int i = 2; i < v.size(); i++) {
			student& s = students.back();
			s.add_task(stod(v[i]));
		}
	}

	sort(students.begin(), students.end(), compare_marks);

	for (const auto& s : students) {
		cout << s.name() << ": " << s.mark() << '\n';
		if (passed(s)) {
			cout << "passed \n";
		}
	}

	return 0;
}

