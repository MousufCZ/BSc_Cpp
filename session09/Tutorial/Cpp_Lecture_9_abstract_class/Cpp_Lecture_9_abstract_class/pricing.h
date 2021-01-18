#ifndef PRICING_H
#define PRICING_H

#include "product.h"

class pricing {
	const std::string _name;

public:
	pricing(const std::string& productnm) : _name(productnm) {}
	const std::string& name() const { return _name; }

	virtual double cost(const product& p, int n) = 0;
};
#endif
