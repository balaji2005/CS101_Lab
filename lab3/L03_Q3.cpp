#include <simplecpp>

main_program {
	int n;
	float x, a, sum;
	cout << "To find the value of a polynomial at x,\n";
	cout << "Enter the degree of the polynomial: ";
	cin >> n;

	cout << "Enter the value of x: ";
	cin >> x;
	
	float temp = pow(x, n);

	for (int i=n; i >= 0; i--) {
		if (i == 1) {
			cout << "Enter the 1st co-efficient: ";
		} else if (i == 2) {
			cout << "Enter the 2nd co-efficient: ";
		} else if (i == 3) {
			cout << "Enter the 3rd co-efficient: ";
		} else {
			cout << "Enter the " << i << "th co-efficient: ";
		}

		cin >> a;

		sum += temp*a;
		temp /= x;
	}
	cout << "The value of the polynomial at x = " << x << " is " << sum << '\n';
}