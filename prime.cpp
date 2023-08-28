#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, count = 0;
	
	cin >> n;
	
	int x = (int)sqrt(n) + 1;
	
	for (int i = 2; i <= x; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	
		if (count == 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}
}
