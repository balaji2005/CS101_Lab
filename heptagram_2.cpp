#include <simplecpp>

main_program {
	turtleSim();
	repeat(7) {
		forward(100);
		right(3*360.0/7);
	}
	wait(5);
}
