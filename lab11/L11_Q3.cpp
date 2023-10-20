#include <iostream>
using namespace std;

int dot(int a[], int b[], int n) {
    int dot = 0;
    for (int i=0; i < n; i++) {
        dot += a[i]*b[i];
    }
    return dot;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int b[n];
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    cout << dot(a, b, n) << endl;
}