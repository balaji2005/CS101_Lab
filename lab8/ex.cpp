#include <iostream>
using namespace std;

void swap(int *alpha, int *beta) {
    int *temp;
    temp = alpha;
    alpha = beta;
    beta = temp;
}

int main() {
    int x = 4, y = 5;
    int *a = &x, *b = &y;

    swap(a, b);

    cout << x << ' ' << y << endl;
    cout << *a << ' ' << *b << endl;
    cout << a << ' ' << b << endl;
    cout << &a << ' ' << &b << endl;
    cout << (long)&a - (long)&b << endl;
}