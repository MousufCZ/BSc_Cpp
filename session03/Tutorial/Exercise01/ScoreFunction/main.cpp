#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Take in series score, 
// ignore the highest and lowest and agerage the rest

int main() {
	// 01. Take in the score in vector
	double x;
	vector<double> score;

	while (cin >> x)
		score.push_back(x);							// Store 
	double n = score.size();						// Size of the vector is assinged to 'n'

	// 02. Total the score in a sorted order
	if (n > 0) {
		sort(score.begin(), score.end());

		// Avrage the score, excluding the highest and lowest score
		double sum = 0;
		typedef vector<double>:: size_type scoreVec_size;

		for (scoreVec_size i = 1; i < n-1; ++i )	// 03. Ignore the first and last scor and average the rest
			sum += score[i];						// Add the score collected -- I will use += to sum
		cout << "Score = " << sum/ (n-2) << '\n';	// (n-2) is because we removed 2 digits  
		return 0;
	}
	else {
		cout << "There are no scores collected!";
	}


	return 0;
}