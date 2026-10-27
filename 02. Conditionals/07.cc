#include <iostream>

using namespace std;

int main() {
	long side_width, x, y;

	cin >> side_width >> x >> y;

	if (side_width <= 0) {
		cerr << "error: invalid side length for 'a'" << endl;
		return 0;
	}
	if (x < 0) {
		cerr << "error: x is negative" << endl;
		return 0;
	}
	if (y < 0) {
		cerr << "error: y is negative" << endl;
		return 0;
	}

	if (
		((x / side_width) % 2 == 0) ^
		((y / side_width) % 2 == 0)
	) {
		cout << "white" << endl;
	}
	else {
		cout << "black" << endl;
	}

	return 0;
}
