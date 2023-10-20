#include <simplecpp>

float cubeRoot(float x, int iter) {
    float y = x;
    for(int i = 0; i < iter; i++) {
        y -= y/3 - x/(3*y*y);
    }
    return y;
}

int main() {
    // cout << cubeRoot(1000, 10) << end(l;
    // while(true){
    int temp;
    cin >> temp;
    cout << cubeRoot(temp, 100) << endl;
    // }
}