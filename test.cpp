#include <iostream>
using namespace std;

int main() {
	float a = 2;
	float b = 6e10;
	float c = -6e10;
	
	cout << ( a + b ) + c << '\n';
	cout << a + ( b + c ) << '\n';
}
