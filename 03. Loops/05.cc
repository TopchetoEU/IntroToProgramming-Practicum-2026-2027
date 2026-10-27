#include <iostream>

using namespace std;

int main() {
	long num, pos;
	cin >> num >> pos;
	if (num < 1) {
		cerr << "error: num out of range" << endl;
		return 0;
	}

	if (pos < 1) {
		cerr << "error: position out of range" << endl;
		return 0;
	}

	for (long i = 0; i < pos - 1; i++) {
		num /= 10;
	}

	if (num == 0) {
		cerr << "error: position too large for number" << endl;
		return 0;
	}

	cout << num % 10 << endl;

	return 0;
}
