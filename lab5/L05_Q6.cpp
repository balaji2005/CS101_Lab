#include <simplecpp>

int main() {
    int n;
    cin >> n;

    int sum = 0;

    for(int i=1; i<n; i++) {
        if (n%i == 0) sum += i;        
    }

    (sum == n) ? cout << n << " is a perfect number." << endl : cout << n << " is not a perfect number." << endl;
}