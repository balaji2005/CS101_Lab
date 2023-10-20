#include <simplecpp>

int main() {
    double n;
    do {
        cin >> n; 
    } while (n > 1 || n < -1);
    double x = n;
    double delta = abs(sin(x) - n);
    // cout << delta << <<sin(PI/2) << endl;

    while(delta > 0.000001) {
        x -= (sin(x)-n)/(cos(x));

        delta = abs(sin(x) - n);
    }
    cout << x << endl;
}