#include <simplecpp>

main_program {
	int number, digitSum, factorialSum;
	cout << "Enter the number: ";
	cin >> number;
	
	int duplicate = number;
	int term;
	
	digitSum = 0;
	factorialSum = 0;
	
	repeat(1e10){
		if (duplicate) {
			digitSum += duplicate % 10;
			int factorial = 1;
			int i = 1;
			term = duplicate % 10;
			repeat(term) {
				factorial *= i;
				i++;
			}
			factorialSum += factorial;
			duplicate -= duplicate % 10;
			duplicate /= 10;
		} else {
			break;
		}
	}
	
	int x = (int)sqrt(factorialSum) + 1;
	int count = 0;
	
	for (int i = 2; i <= x; i++) {
		if (factorialSum % i == 0) {
			count++;
		}
	}
	
	cout << "digitSum = " << digitSum << endl;
	cout << "factorialSum = " << factorialSum << endl;
	
	if (factorialSum == 0 || factorialSum == 1) {
		cout << "factorialSum is not a prime number" << endl;
	} else if (count == 0) {
		cout << "factorialSum is a prime number" << endl;
	} else {
		cout << "factorialSum is not a prime number" << endl;
	}
}
