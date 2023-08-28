#include <simplecpp>

main_program {
	turtleSim();
	
	repeat(10) {
		forward(30);
		left(90);
		forward(100);
		left(90);
		forward(60);
		left(90);
		forward(100);
		left(90);
		forward(30);
		left(10);
	}
	
	wait(5);
}
