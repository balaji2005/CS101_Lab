#include <simplecpp>

main_program {
	float length = 80;
	float a = length/8;
	
	turtleSim();
	
	penUp();
	left(90);
	forward(length/2);
	left(90);
	forward(length/2);
	right(180);
	penDown();
	
	repeat(4) {
		forward(length);
		right(90);
	}
	int n = 1;
	repeat(3) {
	
		penUp();
		forward(a);
		right(90);
		penDown();
		
		repeat(n) {
			forward(a);
			right(90);
			forward(a);
			left(90);
		}
		
		penUp();
		forward(a);
		left(90);
		penDown();
		
		repeat(n+1) {
			forward(a);
			left(90);
			forward(a);
			right(90);
		}
		n += 2;
	}
	
	penUp();
	forward(a);
	right(90);
	penDown();
		
	repeat(7) {
		forward(a);
		right(90);
		forward(a);
		left(90);
	}
	
	penUp();
	forward(a);
	left(90);
	penDown();
	
	repeat(7) {
		forward(a);
		left(90);
		forward(a);
		right(90);
	}
	
	forward(a);
	n = 6;
	
	repeat(3) {
		penUp();
		right(90);
		forward(a);
		penDown();
	}
	
	penUp();
	forward(1000);
	wait(6);	
}
