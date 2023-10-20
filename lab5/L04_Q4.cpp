#include <simplecpp>

main_program {
	int n;
	cout << "Enter the no. of vertices of polygon: ";
	cin >> n;
	float x1, y1;

	float prevx, prevy;
	float nextx, nexty;

	cout << "Enter the co-ordinates in order: " << '\n';
	cin >> x1 >> y1;
	prevx = x1;
	prevy = y1;

	int i = 1;
	float perimeter = 0;

	while (i <= n-1) {
		cin >> nextx >> nexty;
		perimeter += sqrt(pow(nextx - prevx, 2) + pow(nexty - prevy, 2));
		prevx = nextx;
		prevy = nexty;
		i++;
	}

	perimeter += sqrt(pow(nextx - x1, 2) + pow(nexty - y1, 2));

	cout << "Perimeter: " << perimeter << endl;
}	