#include <iostream>

using namespace std;

const double EPSILON = 0.0001;

int main() {
	double x, y;
	cin >> x >> y;

	if (
		x < EPSILON && x > -EPSILON ||
		y < EPSILON && y > -EPSILON
	) {
		cout << "On axis" << endl;
	}
	else if (x > 0 && y > 0) {
		cout << "First" << endl;
	}
	else if (x < 0 && y > 0) {
		cout << "Second" << endl;
	}
	else if (x < 0 && y < 0) {
		cout << "Third" << endl;
	}
	else {
		cout << "Fourth" << endl;
	}

	return 0;
}
