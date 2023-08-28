#include <simplecpp>

main_program {
	float a, b, c;
	
	cout << "Enter a: ";
	cin >> a;
	
	cout << "Enter b: ";
	cin >> b;
	
	cout << "Enter c: ";
	cin >> c;
	
	float angle_c = arccosine((pow(a, 2) + pow(b, 2) - pow(c, 2))/(2*a*b));
	float angle_a = arccosine((pow(c, 2) + pow(b, 2) - pow(a, 2))/(2*c*b));
	
	turtleSim();
	
	forward(c*10);
	right(180 - angle_a);
	forward(b*10);
	right(180 - angle_c);
	forward(a*10);
	
	wait(5);
}
