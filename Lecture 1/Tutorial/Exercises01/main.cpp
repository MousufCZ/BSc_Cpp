#include <iostream>
using namespace std;


int main() {
	//int checkAge();

	int x;
	cout << "What is your age \n";
	cin >> x;

	if (x < 18) {
		cout << x << " is too young.";
	}
	else if (x > 30) {
		cout << x << " is too old.";
	}
	else {
		cout << x << " is the right age";
	}

	return 0;
}