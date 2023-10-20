#include <simplecpp>

main_program{
	int a, d, r, n;
	
	cin >> a >> d >> r >> n;
	
	int temp = a;
	repeat(n) {
		cout << temp << ' ';
		temp += d;
	}
	
	cout << '\n';
	temp = a;
	repeat(n) {
		cout << temp << ' ';
		temp *= r;
	}
	cout << '\n';
}
