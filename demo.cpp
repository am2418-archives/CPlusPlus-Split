#include <iostream>
#include <string>
#include <vector>

using namespace std;
string sp = " ";
char space = sp[0];
string input;
vector<string> identifiers;
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

int main()
{
	while (true) {
		cin >> input;
		identifiers = s(input,space);
		for (int a = 0; a < identifiers.size();a++) {
			cout << identifiers[a] + "\n";
		}
	}
	return 0;
}
