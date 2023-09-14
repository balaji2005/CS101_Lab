#include <simplecpp>

main_program {
	initCanvas();
	Rectangle r(100, 100, 50, 50);
	r.setFill(true);
	r.setColor(COLOR("blue"));
	wait(5);
}