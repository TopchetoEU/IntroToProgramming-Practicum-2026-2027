#include <iostream>

using namespace std;

int main() {
	long num;
	cin >> num;
	if (num < 1) {
		cerr << "error: num out of range" << endl;
		return 0;
	}

	long sum = 0;

	// Not the best solution...
	for (long i = 1; i < num / 2; i++) {
		if (num % i == 0) sum += i;
	}

	cout << (sum == num ? "Perfect" : "Not perfect") << endl;
	return 0;
}
