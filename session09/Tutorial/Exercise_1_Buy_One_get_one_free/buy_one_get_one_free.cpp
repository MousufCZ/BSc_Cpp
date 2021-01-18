#include "buy-one-get-one-free.h"

using namespace std;

buy_one_get_one_free::buy_one_get_one_free() : pricing ("Buy one get one free"){
}

double buy_one_get_one_free::cost(const product& p, int n) {
	/*double total = p.price() * ((n+1)/2);
	int isItBogof = n % 2;

	if ( isItBogof = 1) {
		return (total / 2);
	}
	else {
		return total;*/


	return p.price() * ((n+1)/2);
	//}
}