#include <simplecpp>

main_program {
	int n, factorial;
	cout << "Enter n: ";
	cin >> n;
	factorial = 1;
	int i = 1;
	
	repeat(n) {
		factorial *= i;
		i++;
	}
	cout << "Factorial: " << factorial << '\n';
}
