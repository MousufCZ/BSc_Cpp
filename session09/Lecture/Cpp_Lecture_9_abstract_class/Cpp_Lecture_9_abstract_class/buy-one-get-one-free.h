#ifndef BUY_ONE_GET_ONE_FREE_H
#define BUY_ONE_GET_ONE_FREE_H

#include "pricing.h"

class buy_one_get_one_free : public pricing {
public:
	buy_one_get_one_free();

	virtual double cost(const product& p, int n) override;
};
#endif
