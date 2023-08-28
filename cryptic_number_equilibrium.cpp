#include <simplecpp>
#define nl '\n'

main_program {
	long long unsigned int duplicate = 1;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int largest_number = 1;
	int factorial;
	
	repeat(2147483647){
		
	}
	
	repeat(9) {
		factorial = 1;
		int i = 1;
		repeat(largest_number) {
			factorial *= i;
			i++;
		}
		if (factorial > n){
			break;
		}
		largest_number++;
	}
	if (largest_number > 9) {
		largest_number = 9;
	}
	
	duplicate = n;
	long long unsigned int result = 0;
	
	repeat(largest_number){
		int x = duplicate/factorial;
		duplicate %= factorial;
		repeat(x) {
			result *= 10;
			result += largest_number;
		}
		factorial /= largest_number;
		largest_number--;
	}
	duplicate = result;
	result = 0;
	
	repeat(2147483647){
		
		if (duplicate) {
			result *= 10;
			result += duplicate % 10;
			duplicate -= duplicate % 10;
			duplicate /= 10; 
		} else {
			break;
		}
	}
	
	cout << result << nl;
}
