#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int count = 0;
	double sum = 0;

	double x;
	while (cin >> x) {
		++count;
		sum += x;
	}
	// ........ read in data

	cout << count << " numbers\n";
	if (count > 0) {
		int prec = cout.precision();
		cout << "average = " << setprecision(7) << sum/count << setprecision(prec) << '\n';
	}
	// ........ print result


	return 0;
}