#include <simplecpp>

main_program {
	turtleSim("Flower");
	
	penUp();
	forward(25);
	penDown();
	
	float radius = 50.0;

	repeat (6) {
		forward(25*sqrt(3));
		repeat (240) {
			forward(radius * PI/180);
			right(1);
		}
		forward(25*sqrt(3));
		right(180);
	}
	
	right(90);
	radius = 25*sqrt(3);
	repeat (360) {
		forward(radius * PI/180);
		right(1);
	}
	penUp();
	forward(1000);
	wait(5);
}
