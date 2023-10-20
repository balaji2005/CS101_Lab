#include <iostream>
#define dbg(x) cout << (#x) << " = " << x << '\n' 
using namespace std;

int main() {
	float a = 2;
	float b = 6e10;
	float c = -6e10;
	
	// cout << ( a + b ) + c << '\n';
	dbg(( a + b ) + c);
	// cout << a + ( b + c ) << '\n';
	dbg(a + ( b + c ));

	float n = 1;
	n += 0.99;
 	cout << (n == 1.99) << ' ' << a << endl;

	n = 1;
	n += 0.625;
	cout << (n == 1.625) << ' ' << a << endl;
}
