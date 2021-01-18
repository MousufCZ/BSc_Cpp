#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

list<int> read_istream(istream& in) {
	list<int> l;
	int n;
	while (cin >> n) {
		l.push_back(n);
	}
	return l;
}

void write_ostream(ostream& out, const list<int> &l) {
	out << "The numbers in the list are: ";
	for (const auto n : l) {
		out << " " << n;
	}
	out << '\n';
}

bool even(int n) {
	return n % 2 == 0;
}

void eraseEven(list<int>& l) {
	auto removeEven = remove_if(l.begin(), l.end(), even);
	l.erase(removeEven, l.end());
}

void lambda(list<int> &l) {
	auto removeEven = remove_if(l.begin(), l.end(),
		[](int n) {return n % 2 == 0; });
	l.erase(removeEven, l.end());
}

int main() {
	cout << "Please enter numbers in to the list: " << '\n';
	list<int> values = read_istream(cin);
	//write_ostream(cout, values);
	//list<int> values = {1 , 3 , 4, 43, 3};

	cout << "Exercise 5: Remove even numbers" << '\n';
	//cout << "The number of zeros in the list before 'finding' 1 is: " << 
	write_ostream(cout, values);
	//eraseEven(values);
	lambda(values);
	write_ostream(cout, values);

	return 0;
}