#include <simplecpp>

main_program {
	int x;
	
	x = 22/7;
	cout << x << ' ';
	x = 22.0/7;
	cout << x << ' ';
	x = 6.022E23 + 1 - 6.022E23;
	cout << x << ' ';
	x = 6.022E23 - 6.022E23 + 1;
	cout << x << ' ';
	x = 6.022E23 * 6.022E23;
	cout << x << '\n';
	
	{
		float x;
	
		x = 22/7;
		cout << x << ' ';
		x = 22.0/7;
		cout << x << ' ';
		x = 6.022E23 + 1 - 6.022E23;
		cout << x << ' ';
		x = 6.022E23 - 6.022E23 + 1;
		cout << x << ' ';
		x = 6.022E23 * 6.022E23;
		cout << x << '\n';
	}
	
	{
		double x;
	
		x = 22/7;
		cout << x << ' ';
		x = 22.0/7;
		cout << x << ' ';
		x = 6.022E23 + 1 - 6.022E23;
		cout << x << ' ';
		x = 6.022E23 - 6.022E23 + 1;
		cout << x << ' ';
		x = 6.022E23 * 6.022E23;
		cout << x << '\n';
	}
}
