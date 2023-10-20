#include <iostream>
using namespace std;

void fun(int array[]) {
    for (int i=0; i < sizeof(array) / sizeof(array[0]); i++) {
        std::cout << array[i] << "\t";
    }
    std::cout << "\n";
}

int main() {
    // int a = 5;
    // int b = 6;
    // int c = 7;

    // // cout << &a << endl;
    // // cout << *(&a + 1) << endl;
    // // cout << &a + 1 << endl;
    // // cout << sizeof(long long long int) << endl;
    // // cout << *(&a + 2) << endl;
    // int d;
    // cout << (long) &a - (long) &a << endl;
    // cout << (long) &b - (long) &a << endl;
    // cout << (long) &c - (long) &a << endl;
    // cout << (long) &d - (long) &a << endl;
    // int x[0], e[3];
    // cout << (long) x - (long) &a << endl;
    // cout << (long) e - (long) &a << endl;
    // int y, z;
    // cout << &d << ' ' << x << ' ' << &y << endl;
    // cout << (long) &a - (long) &a << endl;
    // cout << (long) &b - (long) &a << endl;
    // cout << (long) &c - (long) &a << endl;
    // cout << (long) &d - (long) &a << endl;
    // cout << (long) x - (long) &a << endl;
    // cout << (long) &y - (long) &a << endl;
    // cout << (long) &z - (long) &a << endl;

    // int array[4] = {1, 2, 3, 4};

    // for (int i=0; i < sizeof(array) / sizeof(array[0]); i++) std::cout << array[i] << "\t";
    // std::cout << "\n";
    // fun(array);

    char name[6] = "Balaji"
    cout << name << endl;
}