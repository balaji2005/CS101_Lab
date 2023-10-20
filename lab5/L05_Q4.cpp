#include <simplecpp>

main_program {

	char a, b, c;
	cin >> a >> b >> c;

	if (a < 48 || a > 57 || c < 48 || c > 57 || b != '.') {
		cout << "Invalid Input" << endl;
	} else {
		cout << pow(((int) a - 48) + 0.1 * ((int) c - 48), 2) << endl;
	}

}