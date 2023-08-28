#include <simplecpp>

main_program{
	int limit;
	cout << "Enter the limit: ";
	cin >> limit;
	
	int i = 131;
	repeat(limit+1){
		if(i == limit){
			break;
		}
		int duplicate = i;
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
		
		if (reverse != i) {
			i++;
			continue;
		}
		
		int count = 0;
		
		int x = (int)sqrt(i) + 1;
		
		for (int j = 2; j <= x; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		
		if (count != 0) {
			i++;
			continue;
		}
		
		int j = 131;
		repeat(limit+1){
			if(j == limit){
				break;
			}
			int duplicate = j;
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
			
			if (reverse != j) {
				j++;
				continue;
			}
			
			int count = 0;
			
			int x = (int)sqrt(j) + 1;
			
			for (int k = 2; k <= x; k++) {
				if (j % k == 0) {
					count++;
				}
			}
			
			if (count != 0) {
				j++;
				continue;
			}
			
			cout << "(" << i << ", " << j << ")" << endl;;
			j++;
		}
		i++;
	}
}
