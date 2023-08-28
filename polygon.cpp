#include <simplecpp>

main_program {
	int numberOfSides;
	cout << "Enter the number of sides of the polygon: ";
	cin >> numberOfSides;

	float lengthOfSide;
	cout << "Enter the length of a side: ";
	cin >> lengthOfSide;

	turtleSim();

	repeat(numberOfSides) {
		forward(lengthOfSide);
		right(360.0/numberOfSides);
	}

	wait(5);
}
