#include <iostream>

using namespace std;

int main() {
	long year;

	cin >> year;
	if (year == 0) {
		cerr << "error: bad year" << endl;
		return 0;
	}

	if (
		(year % 4 == 0 && year % 100 != 0) ||
		year % 400 == 0
	) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}
