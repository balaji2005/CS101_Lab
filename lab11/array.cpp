#include <iostream>
using namespace std;

float* f(float& a){
    return &a;
}

int main() {
    float a;
    float*(*pf)(float&)= &f;
    cout << (*pf)(a) << endl;
}