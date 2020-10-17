#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	// 01. Input text
	string text;

	// 02. Create vector for text
	vector<string> textVector;

	// 03. Input the text 
	while (cin >> text) {
		textVector.push_back(text);	 // Store sting of text in a vector
	}

	// 04. Read text and print out in reverse order line by line
	while (text.size() > 0) {
		cout << textVector.back() << '\n';
		textVector.pop_back();
	}

	return 0;
}