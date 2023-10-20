#include <simplecpp>

main_program {
	
	float scale = 60;

	initCanvas("Sine Curve", 1000, 1000);
	Line yaxis(100, 50, 100, 950);
	Line xaxis(100, 500, 900, 500);
	Line yaxis_arrow_top_left(100, 50, 90, 60);
	Line yaxis_arrow_top_right(100, 50, 110, 60);
	Line yaxis_arrow_bottom_left(100, 950, 90, 940);
	Line yaxis_arrow_bottom_right(100, 950, 110, 940);
	Line xaxis_arrow_top(900, 500, 890, 490);
	Line xaxis_arrow_bottom(900, 500, 890, 510);

	Text text(90, 500, 0);

	Line mark(0, 0, 0, 0);
	Text mark_text(0, 0, "");

	for (int i = 1; i <= 8; i++) {
		mark.reset(100 + PI*i*scale/2, 490, 100 + PI*i*scale/2, 510);
		mark.imprint();
		if (i % 2) {
			if (i != 1) {
				text.reset(94 + PI*i*scale/2, 520, i);
				text.imprint();
			}	
			text.reset(110 + PI*i*scale/2, 520, "pi/2");
			text.imprint();
		} else {
			if (i != 2) {
				text.reset(95 + PI*i*scale/2, 520, i/2);
				text.imprint();
			}
			text.reset(105 + PI*i*scale/2, 520, "pi");
			text.imprint();
		}
		

	}

	for(int i=1; i<=29; i++) {
		mark.reset(90, 0.25*i*scale + 500, 110, 0.25*i*scale + 500);
		mark.imprint();
		text.reset(78, 0.25*i*scale + 500, -i*0.25);
		text.imprint();
		mark.reset(90, - 0.25*i*scale + 500, 110, - 0.25*i*scale + 500);
		mark.imprint();
		text.reset(76, - 0.25*i*scale + 500, i*0.25);
		text.imprint();
	}

	Turtle t;
	t.penUp();
	t.moveTo(100, 500);
	t.penDown();

	float time = 4*PI;
	float dt = 0.02;

	for (float index = 0; index <= time; index += dt) {

		t.move(scale*dt, -cos(index)*scale*dt);

	}

	wait(5);

}