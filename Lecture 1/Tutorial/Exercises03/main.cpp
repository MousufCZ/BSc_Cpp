#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	// Pseudo-random number generator
	srand(time(nullptr));

	// Random number generated between 1 and n
	int n = 1000000;
	int secret = rand() % n + 1;

	// Add guessing counter
	int guesses = 0;
	
	// Provide instruction to user
	cout << "Guess a number between 1 and " << n << ": ";

	//initialise guess as int and request a guess from user
	int guess;
	cin >> guess;

	// 'WHILE' loop, to ensure the user has opportunity to continue guessing
	while (guess != secret) {
		cout << "Wrong! Guess again: ";
		// Give hints to the user
		if (guess > secret) {
			cout << "Your guess is too high\n";
		}
		else if (guess < secret) {
			cout << "Your guess is too low\n";
		}
		// increment guesses counter
		guesses++;
		// Another chance at guessing
		cin >> guess;
	}


	// Message if the guess is correct
	cout << "Correct!\n";
	cout << "You had " << guesses << " number of guesses.";
	return 0;
}