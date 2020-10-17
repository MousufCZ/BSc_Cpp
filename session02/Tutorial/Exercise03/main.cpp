#include <iostream>
#include <string>

using namespace std;

// cin string and output number of words entered

int main() {
	string text;				// Text
	int count;					// Count
	count = 0;					// Count is set at 0

	while (cin >> text)			// Input text
		++count;				// increment count (use ++count and not count++)

	cout << count << '\n';		// Output count
	return 0;
}