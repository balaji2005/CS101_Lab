#include <simplecpp>

int main() {
    float n;
    cin >> n;

    long double precision = 1E6;

    long double sum = 0;
    for(int i=0; i<precision; i++) {
        sum += (1/(1+(i*(n-1)/precision))+1/(1+((i+1)*(n-1)/precision)))*((n-1)/precision)/2; 
    }

    cout << sum << endl;
}