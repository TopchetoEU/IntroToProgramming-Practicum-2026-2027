#include <iostream>

using namespace std;

int main() {
	int day, month, year;
	cin >> day >> month >> year;

	if (year < 1) {
		cerr << "error: year out of range" << endl;
		return 0;
	}
	if (month < 1 || month > 12) {
		cerr << "error: month out of range" << endl;
		return 0;
	}

	int max_day = 0;

	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			max_day = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			max_day = 30;
			break;
		case 2: {
			if (
				(year % 4 == 0 && year % 100 != 0) ||
				year % 400 == 0
			) {
				max_day = 29;
			}
			else {
				max_day = 28;
			}
		}
		default:
			cerr << "error: month out of range" << endl;
			return 0;
	}

	if (day < 1 || day > max_day) {
		cerr << "error: day out of range" << endl;
		return 0;
	}

	day++;
	if (day > max_day) {
		day = 1;
		month++;
	}
	if (month > 12) {
		month = 1;
		year++;
	}

	cout << day / 10 << day % 10 << ".";
	cout << month / 10 << month % 10 << ".";
	cout << (year / 1000) % 10 << (year / 100) % 10 << (year / 10) % 10 << year % 10 << ".";
	cout << endl;

	return 0;
}
