#ifndef COMPOSITE_SHAPE_H
#define COMPOSITE_SHAPE_H

#include "point.h"

class composite_shape : public shape {
	shared_ptr<shape> shape1;
	shared_ptr<shape> shape2;
public:
	composite_shape(shared_ptr<shape> s1, shared_ptr<shape>
		s2);
	virtual bool contains(const point& p) const override;
	virtual std::string description() const override;
	
	virtual void scale(double s) override;
};

#endif