#include <simplecpp>

main_program {
	turtleSim();
	unsigned int i = 0;
	repeat (4) {
		cout << "i: " << i << endl;
		left(90);
		forward(50 * cosine (i*10));
		forward(-50 * cosine (i*10));
		right(90);
		forward(50);
		repeat(18) i++;
		wait(2);
	}
}
