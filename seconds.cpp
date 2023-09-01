#include <simplecpp>

main_program{

	int seconds;
	cout << "Enter the no. of seconds: ";
	cin >> seconds;
	
	int hours = seconds/3600;
	seconds -= hours * 3600;
	
	int minutes = seconds/60;
	seconds -= minutes * 60;
	
	cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
	cout << 0x3543 << endl;
}
