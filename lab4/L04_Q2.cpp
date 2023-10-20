#include <simplecpp>

main_program {
	initCanvas("Chessboard", 1000, 1000);

	Rectangle blue(0, 0, 0, 0);
	Rectangle red(0, 0, 0, 0);

	blue.setFill(true);
	red.setFill(true);

	blue.setColor(COLOR("blue"));
	red.setColor(COLOR("red"));

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			if (i % 2) {
				red.reset(150 + i*100, 150 + j*200, 100, 100);
				red.imprint();

				blue.reset(150 + i*100, 250 + j*200, 100, 100);
				blue.imprint();

				continue;
			}
			blue.reset(150 + i*100, 150 + j*200, 100, 100);
			blue.imprint();

			red.reset(150 + i*100, 250 + j*200, 100, 100);
			red.imprint();

		}
	}

	wait(5);
}