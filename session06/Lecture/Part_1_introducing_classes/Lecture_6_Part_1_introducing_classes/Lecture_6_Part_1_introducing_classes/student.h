#ifndef STUDENT_H
#define STUDENT_H

#include "stats.h"
#include <string>
#include <vector>

// record of a student's marks in a module
class student {

	std::string n; // student name
	double exam; // exam mark
	std::vector<double> tasks; // coursework marks
	// more to come ...


public:
	student(const std::string& nm, double e);	// Initialised instead of assignments

	void add_task(double v);

	const std::string& name() const { return n; }	// Second const is only seen in memberfunction -- A promise data member wont change the data.
	
	double mark() const;

private:
	double coursework() const;

};

bool passed(const student& s);
bool compare_marks(const student& x, const student& y);

#endif
