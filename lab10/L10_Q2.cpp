#include <iostream>
#include <random>
using namespace std;

int main() {
    srand(time(NULL));
    int a = 0, b = 0;
    for (int i=0; i < 100; i++) {
        cout << (rand()%6 + 1) << ' ';
    }
    cout << '\n';
    // cout << "No. of heads = " << a << '\n';
    // cout << "No. of tails = " << b << '\n';
}