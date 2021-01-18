#include "composite_shape.h"

using namespace std;


composite_shape::composite_shape(shared_ptr<shape> s1,
	shared_ptr<shape> s2) :
	shape1(s1), shape2(s2) {}

bool composite_shape::contains(const point& p) const {
	return shape1->contains(p) || shape2->contains(p);
}
string composite_shape::description() const {
	return "composite of " + shape1->description() +
		" and " + shape2->description();
}
void composite_shape::scale(double s) {
	shape1->scale(s);
	shape2->scale(s);
}