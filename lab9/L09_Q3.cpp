#include <iostream>
using namespace std;

long double w(int n) {
    if (n==0 || n==1 || n==2) {
        return 1;
    }
    return w(n-1) + w(n-2) + w(n-3);
}

int main() {
    int n;
    cin >> n;

    cout << 'W' << n << " = " << w(n) << " from recursion" << '\n';

    long double a = 1, b = 1, c = 1, temp;
    for (int i = 3; i<=n; i++) {
        temp = a + b + c;
        a = b; b = c; c = temp;
    }
    cout << 'W' << n << " = " << c << " from loop" << '\n';
}