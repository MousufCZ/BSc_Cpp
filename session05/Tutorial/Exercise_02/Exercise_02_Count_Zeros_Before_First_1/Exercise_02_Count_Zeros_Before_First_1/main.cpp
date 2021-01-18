#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

list<double> read_istream(istream& in) {
	list<double> l;
	double x;
	while (cin >> x) {
		l.push_back(x);
	}
	return l;
}

void write_ostream(ostream& out, const list<double> l) {
	out << "The numbers in the list are: ";
	for (const auto x : l) {
		out << " " << x;
	}
	out << '\n';
}

/*
find(b, e, v) searches the range[b; e) and returns an iterator pointing at the
first occurrence of v, if there is one, or e if there is not.

find(l.cbegin(),l.cend(), 1)
*/
int zerosBeforeOne(const list<double> &l) {
	list<double>::const_iterator findOne = find(l.cbegin(), l.cend(), 1);			7// What kind of variable is this?
	return count(l.cbegin(), findOne, 0);
}


int main() {
	cout << "Please enter numbers in to the list: " << '\n';
	list<double> values = read_istream(cin);
	write_ostream(cout, values);
	
	cout << "Exercise 2: Return count of all '0' in list before reaching 1 " << '\n'; 
	cout << "The number of zeros in the list before 'finding' 1 is: "<< zerosBeforeOne(values);

	return 0;
}