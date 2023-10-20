#include <simplecpp>

int main() {
    float n;
    cin >> n;

    long double precision = 1e6;

    float width = (n-1)/precision;

    long double sum = 0;
    for(int i=0; i<precision; i++) {
        sum += (1/(1+(i*width))+1/(1+((i+1)*width))+4/(1+((i+0.5)*width)))*(width)/6; 
    }

    cout << sum << endl;
}