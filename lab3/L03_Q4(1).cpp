#include <simplecpp>

main_program {
	initCanvas("Chessboard", 1000, 1000);

	Rectangle blue(0, 0, 0, 0);
	Rectangle red(0, 0, 0, 0);

	blue.setFill(true);
	red.setFill(true);

	blue.setColor(COLOR("#0000ff"));
	red.setColor(COLOR("#ff0000"));

	int i = 0, j = 0;
	repeat(8) {
		j = 0;

		repeat(4) {
			if (i % 2) {
				red.reset(150 + i*100, 150 + j*200, 100, 100);
				red.imprint();

				blue.reset(150 + i*100, 250 + j*200, 100, 100);
				blue.imprint();
			} else {
				blue.reset(150 + i*100, 150 + j*200, 100, 100);
				blue.imprint();

				red.reset(150 + i*100, 250 + j*200, 100, 100);
				red.imprint();
			}
			j++;
		}
		i++;
	}

	wait(5);
}