#include <iostream>
using namespace std;

unsigned int min(unsigned int a[], int n, unsigned int& index) {
    unsigned int min = a[0];
    index = 0;
    for (int i = 0; i < n ; i++) {
        if (a[i] < min) {
            min = a[i];
            index = i;
        }
    }
    return min;
}

int main(){ 
    unsigned int input;
    unsigned int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0};
    unsigned int index = 0;
    cin >> input;
    do {
        if (min(a, 10, index) < input) {
            a[index] = input;
            f[index] = 1;
        }
        cin >> input;
    } while (input != -1);

    for (int i=0; i < 10; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}