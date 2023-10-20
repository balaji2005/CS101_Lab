#include <simplecpp>

main_program {
	int inches;
	cin >> inches;
	
	int miles, furlongs, yards, feet;
	
	miles = inches / (8*220*3*12);
	inches -= miles * (8*220*3*12);
	
	furlongs = inches / (220*3*12);
	inches -= furlongs * (220*3*12);
	
	yards = inches / (3*12);
	inches -= yards * (3*12);
	
	feet = inches / 12;
	inches -= feet * 12;
	
	cout << miles << ' ' << furlongs << ' ' << yards << ' ' << feet << ' ' << inches << '\n';
}
