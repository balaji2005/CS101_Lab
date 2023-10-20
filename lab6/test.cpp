#include <iostream>

int main() {
    int a = 4,b = 5;
    int* c = &a;
    long d = (long)c+4;
    std::cout << *(int *)d;

    // std::cout << sizeof(int);
    return 0;
}