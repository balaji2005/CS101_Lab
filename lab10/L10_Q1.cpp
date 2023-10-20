#include <iostream>
#include <random>
using namespace std;

int main() {
    srand(time(NULL));
    int a = 0, b = 0;
    for (int i=0; i < 100; i++) {
        switch(rand()%2) {
            case 0:
                cout << 'H' << ' ';
                a++;
                break;
            case 1:
                cout << 'T' << ' ';
                b++;
        }
    }
    cout << '\n';
    cout << "No. of heads = " << a << '\n';
    cout << "No. of tails = " << b << '\n';
}