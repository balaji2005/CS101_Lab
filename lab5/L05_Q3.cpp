#include <simplecpp>

main_program {

	float a, b, c;
	cin >> a >> b >> c;

	if (a) {
		if (pow(b, 2) - 4*a*c > 0) {
			cout << "The roots of the equation are: " << (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a) << " and " << (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a) << endl;
		} else if (pow(b, 2) - 4*a*c < 0) {
			if (a > 0) {
				cout << "The roots of the equation are: " << -b/(2*a) << " - " << sqrt(-pow(b, 2) + 4*a*c)/(2*a) << "i" << " and " << -b/(2*a) << " + " << sqrt(-pow(b, 2) + 4*a*c)/(2*a) << "i" << endl;
			} else {
				cout << "The roots of the equation are: " << -b/(2*a) << " - " << -sqrt(-pow(b, 2) + 4*a*c)/(2*a) << "i" << " and " << -b/(2*a) << " + " << -sqrt(-pow(b, 2) + 4*a*c)/(2*a) << "i" << endl;
			}
		} else {
			cout << "The (equation has repeated root: " << -b/(2*a) << endl;
		}
	} else {
		if (b) {
			cout << "The equation has only one root: " << -c/b << endl;
		} else {
			if (c) {
				cout << "The equation has no roots." << endl;
			} else {
				cout << "The equation has infinite roots." << endl;
			}
		}
	}

}