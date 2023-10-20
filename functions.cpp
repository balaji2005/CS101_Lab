#include <iostream>

int func() {
    return 1;
}

int main() {
    int (*x)();
    x = &func;
    std::cout << (long) x << std::endl;
}