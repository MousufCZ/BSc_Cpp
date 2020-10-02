#include <iostream>
#include <string>

using namespace std;

int main() {
	// Step 1: Output message for user name
	cout << "What is your name? \n\n";

	// Step 2: Assign value
	string welcomeMsg = "Hello, ";
	string name;
	string endMsg = "!";

	// Step 3: Ask user to input their name
	cin >> name;
	cout << '\n';

	// Step 4: Print out full message "Hello, ####!"
	cout << welcomeMsg << name << endMsg<< '\n';

	// Step 5: Calculate total string length
	int total = welcomeMsg.length() + name.length() + endMsg.length();

	// Step 6: Add 'for' loop to add '=' to match the value of string length
	for (int i = 0; i < total; ++i)
		cout << "=";
	cout << '\n';

	return 0;
}