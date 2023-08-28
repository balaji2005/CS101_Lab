#include <simplecpp>

main_program {

	int number;
	cout << "Enter the number: ";
	cin >> number;
	
	int duplicate = number;
	int index = 0;
	int length = 0;
	int reverse = 0;
	
	repeat(1e10){
		
		if (duplicate) {
			reverse *= 10;
			reverse += duplicate % 10;
			duplicate -= duplicate % 10;
			duplicate /= 10; 
		} else {
			break;
		}
	}
	
	cout << reverse;
}
