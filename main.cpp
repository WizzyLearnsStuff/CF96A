#include<iostream>

using namespace std;

int main() {
	char c;
	char last = '\0';
	int count = 0;

	while (cin >> c) {
		count = (c == last) ? (count + 1) : 1;
		last = c;

		if (count >= 7) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}
