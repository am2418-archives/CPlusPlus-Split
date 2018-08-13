vector<string> s(string txt, char splitter) {
	vector<string> arr;
	int latest = 0;
	arr.push_back("");
	int len = txt.length();
	for (int i = 0; i < len; i++) {
		if (txt[i] == splitter) {
			latest++;
			arr.push_back("");
		}
		else {
			arr[latest] = arr[latest] + txt[i];
		}

	}
	return arr;
}
