#include <simplecpp>

main_program {
	int x, y, m;
	
	cout << "Enter x: ";
	cin >> x;
	
	cout << "Enter y: ";
	cin >> y;
	
	cout << "Enter m: ";
	cin >> m;
	
	int modulo = 1;
	
	repeat(y) {
		modulo = (modulo*x) % m;
	}
	
	cout << "Modulo: " << modulo << '\n';
}
