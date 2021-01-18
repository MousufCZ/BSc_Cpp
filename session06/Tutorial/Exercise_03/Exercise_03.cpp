void print_student(ostream &out, const student &s) {
	streamsize prec = cout.precision();
	out << s.name() << ": " <<
		setprecision(3) << s.mark() <<
		setprecision(prec) << ’\n’;
}