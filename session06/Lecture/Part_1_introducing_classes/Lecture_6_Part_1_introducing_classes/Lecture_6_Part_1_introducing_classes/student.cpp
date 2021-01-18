#include "student.h"
#include "stats.h"
#include <string>
#include <vector>

using namespace std;

const double exam_weight = 0.7;
const double pass_mark = 40;

student::student(const std::string& nm, double e) : n(nm), exam(e) {}

void student::add_task(double v) {
	tasks.push_back(v);
}

double student::mark() const {
	return exam_weight * exam + (1 - exam_weight) * coursework();
}


double student::coursework() const {
	if (tasks.size() == 0)
		return 0;
	return average(tasks);
	}


bool passed(const student& s) {
	return s.mark() >= pass_mark;
}

bool compare_marks(const student& x, const student& y) {
	return x.mark() > y.mark();
}