#include <simplecpp>

main_program {
	turtleSim();
	repeat(7) {
		forward(100);
		right(2*360.0/7);
	}
	wait(5);
}
