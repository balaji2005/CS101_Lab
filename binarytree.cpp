#include <simplecpp>

main_program {

	int n, i=1;
	cout << "Enter the value of n: ";
	cin >> n;
	
	float length;
	cout << "Enter the length of first side: ";
	cin >> length;
	
	float angle = 90;
	int index = 1;
	
	turtleSim("window", 1000, 1000);
	
	// Sets the beginning point
	penUp();
	left(90);
	forward(450);
	right(180);
	penDown();
	
	repeat(n) {
		index = 1;
		repeat(pow(2, i - 1)) {
			left(angle/2);
			forward(length);
			penUp();
			right(180);
			forward(length);
			left(180 - angle);
			penDown();
			forward(length);
			right(180);
			penUp();
			forward(length);
			penDown();
			if (index != pow(2, i - 1)) {
				penUp();
				right(90-angle/2);
				forward(4*length*sine(angle/2));
				right(90);
				penDown();
			}
			index++;
				
		}
		
		penUp();
		left(90+angle/2);
		forward(4*(pow(2, i - 1) - 1)*length*sine(angle/2));
		left(90-angle/2);
		forward(length);
		left(angle/2);
		penDown();
		length /= 2;
		i++;
		
	}
	
	wait(10);
}
