#include <simplecpp>
#define nl '\n'

main_program {
	int number = 1;
	int duplicate = 1;
	int factorialSum = 0;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int largest_number = 1;
	int factorial;
	
	repeat(1e10) {
	
		factorialSum = 0;
		duplicate = number;
		int term;
		
		repeat(1000){
			if (duplicate && factorialSum < number) {
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
		if (!duplicate && factorialSum == n) {
			cout << "The answer is: " << number << endl;
			break;
		}
		number++;
	}
}

