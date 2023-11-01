#include <iostream>
#include <cmath>
using namespace std;

struct complex{
    double real = 0;
    double imag = 0;

    complex() {
        real = 0;
        imag = 0;
    }

    complex(double arg1) {
        real = arg1;
        imag = 0;
    }

    complex(double arg1, double arg2) {
        real = arg1;
        imag = arg2;
    }

    double mod() {
        return sqrt(real*real + imag*imag);
    }

    void print() {
        cout << real;
        if (imag > 0) {
            cout << " + " << imag << "i";
        } else if (imag < 0) {
            cout << " - " << -imag << "i";
        }
        cout << '\n';
    }

    complex add(complex s) {
        complex p;
        p.real =  real + s.real;
        p.imag = real + s.imag;
        return p;
    }

    complex subtract(complex s) {
        complex p;
        p.real = real - s.real;
        p.imag = imag - s.imag;
        return p;
    }

    complex multiply(complex s) {
        complex p;
        double real1 = s.real;
        double imag1 = s.imag;
        p.real = real*real1 - imag*imag1;
        p.imag = real*imag1 + real1*imag;
        return p;
    }

    complex conjugate() {
        complex p;
        p.real = real;
        p.imag = -imag;
        return p;
    }
    
    complex inverse() {
        complex p;
        p.real = real;
        p.imag = imag;
        double mod = p.mod();
        return p.conjugate().multiply({1/(mod*mod), 0});
    }

    complex divide(complex s) {
        complex p;
        p.real = real;
        p.imag = imag;
        return p.multiply(s.inverse());
    } 
};

int main() {
    
}