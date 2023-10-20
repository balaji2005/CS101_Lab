#include <simplecpp>

main_program {
	float x;
	cout << "Enter the value of x: ";
	cin >> x;

	float sum, temp;

	temp = x;

	for (int i = 1; i <= 15; i+=2) {

		sum += temp;
		temp *= -x*x/((i+1)*(i+2));
	}

	cout << sum << endl;
}