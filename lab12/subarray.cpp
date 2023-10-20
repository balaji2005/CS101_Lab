#include <iostream>
using namespace std;

int main() {
    int array[100] = {};
    int sarray[100];
    int min = array[0];
    int max = array[0];
    sarray[0] = array[0];
    for (int i=1; i < 100; i++) {
        sarray[i] = array[i-1] + sarray[i-1];
        if (sarray[i] > max) {
            max = sarray[i];
        }
        if (sarray[i] < min) {
            min = sarray[i];
        }
    }
    cout << max - min << endl;
}