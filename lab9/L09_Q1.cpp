#include <iostream>
using namespace std;

long long factorial(int i) {
    return i? i*factorial(i-1): 1; 
}

int main() {
    int i;
    cin >> i;

    cout << i << "! = " << factorial(i) << endl;
}