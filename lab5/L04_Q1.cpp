#include <simplecpp>

main_program {
	float a, b, c;
	cin >> a >> b >> c;

	if (a > b) {
		a += b;
		b = a - b;
		a -= b;
	}
	if (b > c) {
		b += c;
		c = b - c;
		b -= c;
	}
	if (a > b) {
		a += b;
		b = a - b;
		a -= b;
	}
	if (b > c) {
		b += c;
		c = b - c;
		b -= c;
	}
	cout << a << ' ' << b << ' ' << c << endl;
}