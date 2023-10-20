#include <simplecpp>

main_program {
	int n;
	float x, a, sum;
	cin >> n;
	cin >> x;
	cin >> a;

	sum = a;
	float temp = x;

	for (int i=1; i <= n; i++) {
		cin >> a;

		sum += temp*a;
		temp *= x;
	}
	cout << sum << '\n';
}