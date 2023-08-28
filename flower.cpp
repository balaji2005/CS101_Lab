#include <simplecpp>

main_program {
	turtleSim();

	repeat (8) {
		forward(50);
		repeat (50) {
			forward(5);
			right(5);
		}
		forward(50);
		right(180);
	}

	wait(5);
}
