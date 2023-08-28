#include <simplecpp>

main_program {

	int n, i=1;
	cout << "Enter the value of n: ";
	cin >> n;
	
	float length = 100;
	float angle = 120;
	int index = 1;
	float decrease = 3;
	float translate = 100*sqrt(2);
	
	turtleSim("window", 1000, 1000);
	
	penUp();
	left(90);
	forward(450);
	right(180);
	penDown();
	
	repeat(n) {
		index = 1;
		repeat(i) {
			left(angle/2);
			wait(0.2);
			forward(length);
			wait(0.2);
			penUp();
			right(180);
			wait(0.2);
			forward(length);
			wait(0.2);
			left(180 - angle);
			wait(0.2);
			penDown();
			forward(length);
			wait(0.2);
			right(180);
			wait(0.2);
			penUp();
			forward(length);
			wait(0.2);
			penDown();
			if (index != i) {
				penUp();
				right(90-angle/2);
				wait(0.2);
				forward(6*length*sine(angle/2));
				wait(0.2);
				right(90);
				wait(0.2);
				penDown();
			}
			cout << index << ' ' << i << endl;
			index++;
				
		}
		
		penUp();
		left(90+angle/2);
		wait(0.2);
		forward(6*(i-1)*length*sine(angle/2));
		wait(0.2);
		left(90-angle/2);
		wait(0.2);
		forward(length);
		wait(0.2);
		left(angle/2);
		wait(0.2);
		penDown();
		length /= 3;
		i++;
		
	}
	
	wait(5);
}
