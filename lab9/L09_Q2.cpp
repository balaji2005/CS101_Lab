#include <iostream>
using namespace std;

long long comb(int n, int r) {
    if (r == 0) {
        return 1;
    }
    if (n == r) {
        return 1;
    }
    // cout << n << ' ' << r << '\n';
    if (n < -2) {
        return 0;
    }
    return comb(n-1, r) + comb(n-1, r-1);
}

int main() {
    int n,r;
    cin >> n >> r;

    cout << n << 'C' << r << " = " << comb(n, r) << endl;
}