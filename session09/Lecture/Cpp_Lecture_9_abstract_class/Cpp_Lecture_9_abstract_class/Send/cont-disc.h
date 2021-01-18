#ifndef CONT_DISC_H
#define CONT_DISC_H

#include "pricing.h"

class cont_disc : public pricing {
public:
	cont_disc();

	virtual double cost(const product& p, int n) override;
};
#endif
