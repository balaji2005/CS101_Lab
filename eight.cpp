#include <simplecpp>

main_program {
	turtleSim();
	
	int n = 100;
	
	repeat(n) {
		forward(5);
		left(360.0/n);
	}
	repeat(n) {
		forward(5);
		right(360.0/n);
	}
	
	wait(5);
}
