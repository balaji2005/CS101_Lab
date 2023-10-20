#include <simplecpp>

float norm(float x, float y, float z, int k = 2) {
    return pow(pow(x, k) + pow(y, k) + pow(z, k), 1/k);
}

int main() {
    float x, y, z, k;
    cin >> x >> y >> z << k;
    norm(x, y, z);
    norm(x, y, z, k);
}