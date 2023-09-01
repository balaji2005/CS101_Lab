#include <simplecpp>

main_program {
	turtleSim("Spiral", 1000, 1000);
	
	float radius = 450;
	float vr = 5;
	float w = 0.1*PI;
	float dt = 0.01;
	float velocity;
	
	penUp();
	forward(450);
	left(90);
	penDown();
	
	float time;
	left(arctangent(vr/(radius*w)));
	repeat(radius / (vr * dt)) {
		velocity = sqrt( pow(vr, 2) + pow(radius * w, 2) );
		left(w*dt*180/PI);
		forward(velocity*dt);
		radius -= vr*dt;
	}
	
	wait(6);
	
	
}
