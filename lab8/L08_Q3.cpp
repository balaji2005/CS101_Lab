#include <simplecpp>

void polygon() {
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

    initCanvas("Polygon", 1000, 1000);
    Line l(0, 0, 0, 0);

	while (i <= n-1) {
		cin >> nextx >> nexty;
		perimeter += sqrt(pow(nextx - prevx, 2) + pow(nexty - prevy, 2));
        l.reset(prevx, prevy, nextx, nexty);
        l.imprint();
		prevx = nextx;
		prevy = nexty;
		i++;
	}

	perimeter += sqrt(pow(nextx - x1, 2) + pow(nexty - y1, 2));
    l.reset(nextx, nexty, x1, y1);
    l.imprint();

	cout << "Perimeter: " <<perimeter << endl;
    wait(5);
} 

main_program {
	polygon();
}	