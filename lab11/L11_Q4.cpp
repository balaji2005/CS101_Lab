#include <iostream>
using namespace std;

float area(float x1, float y1, float x2, float y2, float x3, float y3) {
    return abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
}

bool checkSlope(float a[], float b[], int n) {
    for (int i=0; i < n; i++) {
        for (int j=i+1; j < n; j++) {
            for (int k=j+1; k < n; k++) {
                if (area(a[i], b[i], a[j], b[j], a[k], b[k]) == 0) {
                    cout << "Point (" << a[i] << ", " << b[i] << "), Point (" << a[j] << ", " << b[j] << ") and Point (" << a[k] << ", " << b[k] << ") are collinear" << '\n';
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    float a[n];
    float b[n];
    
    for(int i=0; i<n; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    bool b = checkSlope(a, b, n) ? "YES" : "NO";
}