#include <simplecpp>

main_program {
	float radius = 80;
	int n = 360;
	
	turtleSim();
	
	penUp();
	left(90);
	forward(radius);
	right(90);
	penDown();
	
	repeat(6) {
		repeat(n) {
			forward(radius*2*PI/n);
			left(360.0/n);
		}
		repeat(n/6) {
			forward(radius*2*PI/n);
			right(360.0/n);
		}
	}
	
	wait(5);
}
