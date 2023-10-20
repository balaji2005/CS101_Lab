#include <simplecpp>

main_program {
	int n;
	cin >> n;

	for (int i=2; i<n; i++) {
		int count = 0;
		
		int x = (int)sqrt(i) + 1;
		
		for (int j = 2; j <= x; j++) {
			// cout << i << " % " << j << " = " << i%j << endl;
			if (i % j == 0) {
				count++;
				break;
			}
		}
		
		if (count==0 || i == 2) {
			cout << i << ' ';
		}
	}
	cout << endl;
}