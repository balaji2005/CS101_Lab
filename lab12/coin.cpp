#include <iostream>
#include <string>
using namespace std;

int main() {
    int len = 3;
    int coins[len] = {1, 2, 5};
    int n = 3;
    while(true){
        cin >> n;
        // int sol[n+1];
        // sol[0] = 0;
        // for (int i=1; i<=n; i++) {
        //     sol[i] = 0;
        // }
        for (int i=1; i<=n; i++) {
            for (int x : coins) {
                if (x < i) {
                    sol[i] += sol[i - x];
                }
                if (x == i) {
                    sol[i] += 1;
                }
            }
        }
        cout << sol[n] << endl;
    }
}