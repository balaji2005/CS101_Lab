#include <simplecpp>

main_program {
	int r, sum, temp;
	cout << "Enter the value of r: ";
	cin >> r;
	sum = 0;
	temp = 1;
	float fac = 1;
	for (int k = 0; k <= r; k++) {
		if (k) {
			fac *= k;
		}
	}

	temp = fac;
	int tempfac = 1;

	for (int k = 0; k <= r; k++) {
		sum += temp;
		tempfac *= -(k+1);
		temp = fac/tempfac;
	}


	cout << "D(" << r << ")" << " = " << sum << endl;
	
}