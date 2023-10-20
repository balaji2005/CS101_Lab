#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b > a) {
        b += a;
        a = b - a;
        b -= a;
    }
    if (a%b) {
        return gcd(b, a%b);
    }
    return b;
}

void diophantine(int a, int b, int c, float &x, float &y) {

    if (a == 0 && b != 0) {
        x = 0;
        y = c/b;
        return;
    }

    if (b == 0 && a != 0) {
        x = 0;
        y = c/b;
        return;
    }

    if (b == 0 && a == 0) {
        x = 0;
        y = 0;
        return;
    }

    if (a == 1) {
        x = c - b;
        y = 1;
        return;
    }

    if (b == 1) {
        y = c - a;
        x = 1;
        return;
    }

    if (b > a) {
        // cout << a << ' ' << b-a << '\n';
        diophantine(a, b - a, c, x, y);
        x -= y;
        return;
    }
    // cout << a-b << ' ' << b << '\n';
    diophantine(a - b, b, c, x, y);
    y -= x;
}

int abs(int a) {
    return a > 0 ? a : -a;
}

int main() {
    int a0, b0;
    int a, b, c;
    float x, y;

    cin >> a >> b >> c;

    if (c < 0) {
        a = -a;
        b = -b;
        c = -c;
    }

    a0 = abs(a);
    b0 = abs(b);

    if (c % gcd(a0, b0)) {
        cout << "There are no solutions to this equation!!!" << endl;
        return 0;
    }

    diophantine(a0, b0, c, x, y);
    cout << (a > 0 ? x : -x) << ' ' << (b > 0 ? y : -y) << endl;
}