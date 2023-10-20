#include <simplecpp>

main_program {
	float velocity, theta;

	float dt = 0.01;
	float g = 9.8;
	float t = 0;
	
	initCanvas("Projectile", 1000, 1000);

	Turtle turtle;

	int position1 = getClick();

	float x1 = position1 / 65536;
	float y1 = position1 % 65536;

	turtle.penUp();
	turtle.moveTo(x1, y1);
	turtle.penDown();

	int position2 = getClick();

	float x2 = position2 / 65536;
	float y2 = position2 % 65536;

	float scale = 0.3;

	velocity = scale * sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	theta = atan((y2 - y1) / (x2 - x1));

	float ux = velocity * cos(theta);
	float uy = - velocity * sin(theta);

	float time_of_flight = abs(2*uy/g);

	repeat(time_of_flight / dt) {
		turtle.move(ux*dt, -uy*dt);
		t += dt;
		uy -= g*dt;
	}
	
	wait(5);
}
