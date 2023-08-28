#include <simplecpp>

main_program {
	float velocity, theta;
	cout << "Enter the velocity: ";
	cin >> velocity;
	
	cout << "Enter the angle in degrees: ";
	cin >> theta;

	float dt = 0.001;
	float g = 9.8;
	float t = 0;

	float ux = velocity * cosine(theta);
	float uy = velocity * sine(theta);

	float time_of_flight = 2*uy/g;

	turtleSim();
	
	penUp();
	right(180);
	forward(pow(velocity, 2)*sine(2*theta)/(2*g));
	right(180);
	penDown();
	
	left(theta);
	repeat(time_of_flight / dt) {
		forward(velocity * dt);
		right((g*ux*dt/pow(velocity, 2)) * (180/PI));
		t += dt;
		velocity = sqrt(pow(ux, 2) + pow(uy - g*t, 2));
	}
	
	left(theta);
	left(90);
	left(theta);
	theta = 90 - theta;
	
	t = 0;
	
	ux = velocity * cosine(theta);
	uy = velocity * sine(theta);
	
	time_of_flight = 2*uy/g;
	
	repeat(time_of_flight / dt) {
		forward(velocity * dt);
		left((g*ux*dt/pow(velocity, 2)) * (180/PI));
		t += dt;
		velocity = sqrt(pow(ux, 2) + pow(uy - g*t, 2));
	}
	
	wait(5);
}
