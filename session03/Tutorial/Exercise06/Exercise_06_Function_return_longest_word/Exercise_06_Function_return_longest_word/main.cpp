#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


vector<char> read_vector(istream& in) {
	vector<string> v;
	string x;
	while (cin >> x)
		v.push_back(x);
	return v;
}

using namespace std;

/* Write a program that reads some text from the standard input
and then prints out the longest word in the input. (You shouldn’t
need to retain all the words to do this. */

int main() {

	cout << "Please enter word\n";
	const auto text = read_vector(cin);

	// Text for input and the longest word
	string text;
	string longestWord;

	while (cin >> text) {					// Input text 
		if (text.size() > longestWord.size()) {		// if text is bigger then longest work
			longestWord = text;			// We are overwritting the input text with the longest word
		}
	}

	cout << longestWord << '\n';				// Print out the longestWord
	return 0;
}