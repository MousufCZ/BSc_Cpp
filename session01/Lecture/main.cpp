#include <iostream>
#include <string>

using namespace std;

int square(int n) {
	return n * n;
}

int factorial(int n) {
	int prod = 1;
	for (int i = 1; i <= n; ++i)
		prod *= i;
	return prod;
}

int main(){

	string name;
	cout << "What is your name? ";
	cin >> name;
	cout << "Hello " << name << ", nice to meet you!\n";
	cout << "Your name has " << name.size() << " letters\n";
	string name2 = name; //Assignment

	
	/**
	=========================
	part 1
	=========================
	int x = square(x);
	int y = factorial(7);**/

	/**cout << "Hello World!\n";
	int x;
	cout << "Enter a number: ";
	cin >> x;
	cout << "x is " << x << '\n';
	cout << "x sq us " << square(x) << '\n';**/

	return 0;
}