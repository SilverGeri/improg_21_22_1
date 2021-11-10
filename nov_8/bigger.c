int* bigger(int* first, int* second) {
	if (*second > *first) {
		return second;
	}

	return first;
}
