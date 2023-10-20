#include <simplecpp>

main_program {

	cout << "Centigrade     Fahrenheit" << '\n';
	int count = 0;
	float fah = 0;

	while (count <= 100) {
		fah = 9.0 * (count / 5.0) + 32.0;
		if (count == 0) {
			cout << "     " << count << "             " << fah << '\n';
		} else if (count == 100) {
			cout << "   " << count << "            " << fah << '\n';
		} else {
			if (fah < 100) {
				cout << "    " << count << "             " << fah << '\n';
			} else {
				cout << "    " << count << "            " << fah << '\n';
			}	
		}
		count += 10;
	}
}