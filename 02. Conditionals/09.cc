#include <iostream>

using namespace std;

const double EPSILON = 0.00001;

int main() {
	double a, b, c;

	cin >> a >> b >> c;
	if (a <= EPSILON || b <= EPSILON || c <= EPSILON) {
		cerr << "error: bad side length" << endl;
		return 0;
	}

	if (
		a + b <= c ||
		b + c <= a ||
		c + a <= b
	) {
		cerr << "error: bad triangle" << endl;
		return 0;
	}

	bool a_eq_b = (a - b > -EPSILON && a - b < EPSILON);
	bool b_eq_c = (b - c > -EPSILON && b - c < EPSILON);
	bool c_eq_a = (a - c > -EPSILON && a - c < EPSILON);

	if (a_eq_b && b_eq_c) {
		cout << "Equilateral" << endl;
		cout << "Acute" << endl;
		return 0;
	}
	else if (a_eq_b || b_eq_c || c_eq_a) {
		cout << "Isosceles" << endl;
	}
	else {
		cout << "Scalene" << endl;
	}

	double left, right;

	if (a > b && a > c) {
		left = a * a;
		right = b * b + c * c;
	}
	else if (b > a && b > c) {
		left = b * b;
		right = a * a + c * c;
	}
	else {
		left = c * c;
		right = a * a + b * b;
	}

	if (left - right > -EPSILON && left - right < EPSILON) {
		cout << "Right" << endl;
	}
	else if (left < right) {
		cout << "Acute" << endl;
	}
	else {
		cout << "Obtuse" << endl;
	}

	return 0;
}
