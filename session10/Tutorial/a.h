#ifndef COMPOSITE_SHAPE_H
#define COMPOSITE_SHAPE_H

#include "point.h"

class A {
public:
	A() { cout << "A\n"; }
	˜A() { cout << "˜A\n"; }
};

class B {
public:
	B() { cout << "B\n"; }
	˜B() { cout << "˜B\n"; }
};

#endif

