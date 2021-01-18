#include "point.h"
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

int main() {
	point pt(2, 3);

	/*for (int i = 0; i <= 10; ++i)
		scene.push_back(make_shared<circle>(point(i, 1), 10)
		);
	*/

	/*
	for (const shared_ptr<shape>& p : scene)
		if (p->contains(point(5, 8)))
			cout << p->description() << '\n';
	*/

	circle s1(point(1, 3), 5);
	rectangle s2(point(6, 2), 4, 3);

	return 0;
}


