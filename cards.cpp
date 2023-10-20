#include <simplecpp>

main_program {
	turtleSim();
	double a = 100;
	double b = 60;
	forward(b);
	left(90);
	forward(a);
	left(90);
	forward(b);
	left(90);
	forward(a);
	left(90);
	right(10);
	double x = (b-a*sine(10))/cosine(10);
	double y = sqrt(a*a + x*x - b*b);
	repeat(5) {
		forward(b);
		left(90);
		forward(a);
		left(90);
		forward(b - x);
		left(100);
		forward(y);
		right(90);
		forward(b);
		// cout << "HI" << endl;
		right(200);
	}
	
	wait(5);
}
