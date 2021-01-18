#ifndef CONT_DISC_Q3_H
#define CONT_DISC_Q3_H

#include "pricing.h"

class cont_disc_q3 : public pricing {
	const double _discount;

public:
	cont_disc_q3();

	virtual double cost(const product& p, int n) override;
};

#endif
#pragma once
