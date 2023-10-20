#include <simplecpp>

main_program {

	float x;
	cin >> x;
	float temp = 1;
	float sum = 0;
	float i = 1;
	repeat(15) {
		sum += temp;
		temp *= x/i;
		i++;
	}
	cout << sum << endl;
}