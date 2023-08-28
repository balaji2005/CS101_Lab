#include <simplecpp>

main_program {

	int n, i;
	cin >> n;
	
	i = 1;
	
	repeat(n) {
		repeat(i) {
			cout << '*';
		}
		cout << '\n';
		i += 1;
	}
}
