#include <simplecpp>

main_program {

	int year;
	cin >> year;

	if (year % 100) {
		if (year % 4) {
			cout << year << " is not a leap year." << endl;
		} else {
			cout << year << " is a leap year." << endl;
		}
	} else {
		if (year % 400) {
			cout << year << " is not a leap year." << endl;
		} else {
			cout << year << " is a leap year." << endl;
		}
	}
}