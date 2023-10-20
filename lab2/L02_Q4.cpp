#include <simplecpp>

main_program {
	float f1, f2, centigrade = 100;
	f1 = centigrade*9/5 + 32;
	f2 = 32 + 9/5*centigrade;
	cout << f1 << ' ' << f2 << endl;
	
	char x = 'a', y;
	y = x + 1;
	cout << y << ' ' << x + 1 << endl;
}
