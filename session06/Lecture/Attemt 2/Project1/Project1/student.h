#ifndef STUDENT_H
#define STUDENT_H

#include "stats.h"
#include <string>
#include <vector>

const double exam_weight = 0.7;

// record of a student's marks in a module
class student {

	std::string n; // student name
	double exam; // exam mark
	std::vector<double> tasks; // coursework marks
	// more to come ...


public:
	student(const std::string& nm, double e) : n(nm), exam(e) {}		// Initialised instead of assignments

	void add_tast(double v) {
		tasks.push_back(v);
	}

	const std::string& name() const { return n; }	// Second const is only seen in memberfunction -- A promise data member wont change the data.
	double mark() const {
		return exam_weight * exam + (1 - exam_weight) * coursework();
	}

private:
	double coursework() const {
		if (tasks.size() == 0)
			return 0;
		return average(tasks);
	}
};
#endif