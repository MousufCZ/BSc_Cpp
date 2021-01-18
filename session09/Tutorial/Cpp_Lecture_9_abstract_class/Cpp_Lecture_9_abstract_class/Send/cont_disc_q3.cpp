#include "cont_disc_q3.h"

using namespace std;

/*Implementand test a pricing policy in which when n items are ordered, the second is discounted
at 10 %, the third is discounted twice, etc.That is, if the price were £100, the second item would
cost £90, the third £81, the fourth £72.90, and so on.*/

cont_disc_q3::cont_disc_q3(double d) : 
	pricing("Discount of " + to_string(d) + " for " + to_string(n)
		+ " or more items"), _discount(d) {}

double cont_disc_q3::cost(const product& p, int n) {
	double total = 0;
	double item_price = p.price();
	for (int i = 0; i < n; ++i) {
		total += item_price;
		item_price *= 0.9;
	}
	return total;
}

/*

total is 0
product price is represented by individual item price

loop for all items
	total is added by item price
	item price is discounted by 10%

*/
