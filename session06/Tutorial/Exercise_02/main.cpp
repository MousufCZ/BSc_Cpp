double best3(vector<double> v) {
	typedef vector<double>::size_type size_type;
	const size_type n = v.size();


	sort(v.begin(), v.end());
	double total = 0;
	for (size_type i = n < 3 ? 0 : n-3; i < n; ++i)
		total += v[i];
	return total/3;
}



//double student::coursework() const {
//	return best3(tasks);
//}