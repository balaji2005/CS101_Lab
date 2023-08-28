#include <simplecpp>

main_program {
	int n, input, len_of_sequence, max;
	cout << "Enter the number of inputs: ";
	cin >> n;
	
	len_of_sequence = 0;
	max = 0;
	
	repeat(n) {
		cin >> input;
		len_of_sequence = 0;
		repeat(2147483647){
			len_of_sequence++;
			if (input % 2 == 0) {
				input /= 2;
			} else if (input == 1) {
				if (len_of_sequence > max) {
					max = len_of_sequence;
				}
				break;
			} else {
				input *= 3;
				input ++;
			}
		}
		
	}
	
	cout << max << endl;
}
