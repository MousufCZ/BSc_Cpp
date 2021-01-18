double student::coursework() const {
	if (tasks.size() == 0)
		return 0;
	return average(tasks);
}