#include <simplecpp>

main_program {
    int n;
    cin >> n;
    double x = n;
    double delta = x*x - n;

    while(delta >= 0.0001) {
        x -= (x*x - n)/(2.0*x);

        delta = x*x - n;
    }
    cout << x << endl;
    return 0;
}