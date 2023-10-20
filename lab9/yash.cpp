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
    if (a == 1) {
        x = c-b;
        y = 1;
        return;
    }

    if (b == 1) {
        y = c-a;
        x = 1;
    }

    if(a>b)
    {
        diophantine(a-b,b,c,x,y);
        y = y-x;   
    }

    if(b>a)
    {
        diophantine(a,b-a,c,x,y);
        x = x-y;
    }
}

int main() {
    int a, b, c;
    float x, y;

    cin >> a >> b >> c;

    if (c % gcd(a, b)) {
        cout << "There are no solutions to this equation!!!" << endl;
        return 0;
    }

    diophantine(abs(a), abs(b), c, x, y);
    cout << (a<0?(-x):x )<< ' ' << (b<0?(-y):y )<< endl;
}