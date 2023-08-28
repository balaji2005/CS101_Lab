#include <simplecpp>

main_program {
	
	// Line 1 - 2
	repeat(2) {
	
		repeat(9) {
			cout << '*';
		}
		cout << "   ";
		repeat(9) {
			cout << '*';
		}
		cout << "   ";
		repeat(9) {
			cout << '*';
		}
		cout << '\n';
		
	}
	
	// Line 3 - 12
	repeat(10) {
	
		repeat(4) {
			cout << ' ';
		}
		cout << '*';
		repeat(11) {
			cout << ' ';
		}
		cout << '*';
		repeat(11) {
			cout << ' ';
		}
		cout << '*';
		repeat(4) {
			cout << ' ';
		}
		cout << '\n';
	}
	
	repeat(2) {
	
		repeat(9) {
			cout << '*';
		}
		cout << "   ";
		repeat(9) {
			cout << '*';
		}
		cout << "   ";
		repeat(4) {
			cout << ' ';
		}
		cout << '*';
		repeat(4) {
			cout << ' ';
		}
		cout << '\n';
	}
}
