#include <simplecpp>

main_program {
	int n;
	cin >> n;

	repeat(n) {
		repeat(3*n) {
			cout << '*';
		}
		cout << '\n';
	}

	repeat(2*n) {
		repeat(n) {
			cout << ' ';
		}
		repeat(n) {
			cout << '*';
		}
		repeat(n) {
			cout << ' ';
		}
		cout << '\n';
	}

}
