#include <iostream>

using namespace std;

const double EPSILON = 0.000001;

int main() {
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Divison emainder" << endl;
	cout << "> ";

	long op;
	double a, b;
	cin >> op >> a >> b;

	if ((op == 4 || op == 5) && (b > -EPSILON && b < EPSILON)) {
		cerr << "error: division by zero" << endl;
		return 0;
	}

	switch (op) {
		case 1: {
			double a, b;
			cin >> a >> b;
			cout << a + b;
			break;
		}
		case 2: {
			double a, b;
			cin >> a >> b;
			cout << a - b;
			break;
		}
		case 3: {
			double a, b;
			cin >> a >> b;
			cout << a * b;
			break;
		}
		case 4: {
			double a, b;
			cin >> a >> b;

			if (b > -EPSILON && b < EPSILON) {
				cerr << "error: division by zero" << endl;
				return 0;
			}

			cout << a / b;
			break;
		}
		case 5: {
			long long a, b;
			cin >> a >> b;

			if (b == 0) {
				cerr << "error: division by zero" << endl;
				return 0;
			}

			cout << a / b;
			break;
		}
		default:
			cerr << "error: unknown operation " << op << endl;
			return 0;
	}

	cout << endl;
	return 0;
}
