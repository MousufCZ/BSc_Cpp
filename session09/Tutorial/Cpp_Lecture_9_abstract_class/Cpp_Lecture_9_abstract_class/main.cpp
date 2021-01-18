#include "product.h"
#include "pricing.h"
#include "cheaper-pricing.h"
#include "discount-pricing.h"
#include "eccentric-pricing.h"
#include "simple-pricing.h"
#include "buy-one-get-one-free.h"
#include "cont-disc.h"
#include "cont_disc_q3.h"
#include "average_pricing.h"
#include <iostream>
#include <string>

using namespace std;

void print_bill(pricing& policy) {
	cout << "pricing policy: " << policy.name() << '\n';
	string productnm;
	double p;
	int n;
	while (cin >> productnm >> p >> n) {
		product item(productnm, p);
		cout << n << " x " << productnm << ": " << policy.cost(item, n) << '\n';
	}
}

int main() {
	discount_pricing policy_a(10, 0.1);
	eccentric_pricing policy_b;
	//cheaper_pricing policy_c(policy_a, policy_b);
	//buy_one_get_one_free policy_d;	//Q1
	//cont_disc policy_e;				//Q2
	//cont_disc_q3 policy_f;			//Q3
	average_pricing policy_g (policy_a, policy_b);		//Q4

	print_bill(policy_g); 
	return 0;
}