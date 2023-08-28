#include <simplecpp>

main_program {
	
	int n;
	cout << "Enter the value of n: ";
	cin >> n;

	turtleSim();
	
	float angle = 2.6;
	float element = 0.3;
	float len = 30;
	repeat(n) {
		forward(len);
		repeat(100) {
			forward(element);
			left(angle);
		}
		forward(len);
		repeat(100) {
			forward(element);
			right(angle);
		}
		
		right(360.0/n);
	}
	
	wait(15);
}
