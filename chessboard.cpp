#include <simplecpp>

main_program {
	float length = 400;
	float a = length/8;
	
	turtleSim("Chessboard");
	
	penUp();
	left(90);
	wait(0.1);
	forward(length/2);
	wait(0.1);
	left(90);
	wait(0.1);
	forward(length/2);
	wait(0.1);
	right(180);
	penDown();
	
	repeat(4) {
		forward(length);
		wait(0.1);
		right(90);
		wait(0.1);
	}
	int n = 1;
	repeat(3) {
	
		penUp();
		forward(a);
	wait(0.1);
		right(90);
	wait(0.1);
		penDown();
		
		repeat(n) {
			forward(a);
	wait(0.1);
			right(90);
	wait(0.1);
			forward(a);
	wait(0.1);
			left(90);
		}
		
		penUp();
		forward(a);
	wait(0.1);
		left(90);
	wait(0.1);
		penDown();
		
		repeat(n+1) {
			forward(a);
	wait(0.1);
			left(90);
	wait(0.1);
			forward(a);
	wait(0.1);
			right(90);
		}
		n += 2;
	}
	
	penUp();
	forward(a);
	wait(0.1);
	right(90);
	wait(0.1);
	penDown();
		
	repeat(7) {
		forward(a);
	wait(0.1);
		right(90);
	wait(0.1);
		forward(a);
	wait(0.1);
		left(90);
	}
	
	penUp();
	forward(a);
	wait(0.1);
	left(90);
	wait(0.1);
	penDown();
	
	repeat(7) {
		forward(a);
	wait(0.1);
		left(90);
	wait(0.1);
		forward(a);
	wait(0.1);
		right(90);
	}
	
	forward(a);
	wait(0.1);
	n = 6;
	
	repeat(3) {
		penUp();
		right(90);
	wait(0.1);
		forward(a);
	wait(0.1);
		penDown();
		right(90);
	wait(0.1);
		
		repeat(n) {
			forward(a);
	wait(0.1);
			left(90);
	wait(0.1);
			forward(a);
	wait(0.1);
			right(90);
		}
		
		right(180);
	wait(0.1);
		forward(a);
	wait(0.1);
		left(90);
	wait(0.1);
		
		repeat(n-1) {
			forward(a);
	wait(0.1);
			right(90);
	wait(0.1);
			forward(a);
	wait(0.1);
			left(90);
		}
		
		right(90);
	wait(0.1);
		
		n -= 2;
	}
	
	penUp();
	forward(1000);
	wait(6);	
}
