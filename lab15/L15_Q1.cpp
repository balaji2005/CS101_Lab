#include <iostream>
#include <cmath>
using namespace std;

struct Polynomial {
    int degree;
    double coeff[101];

    double value(double real) {
        double product = 1;
        double sum = 0;
        for (int i=0; i<=degree; i++) {
            sum += coeff[i]*product;
            product *= real;
        }
        return sum;
    }

    Polynomial operator+(Polynomial &p) {
        Polynomial r;
        int ma = max(degree, p.degree);
        r.degree = ma;
        int i;
        for (i=0; i<= min(degree, p.degree); i++) {
            r.coeff[i] = coeff[i] + p.coeff[i];
        }
        if (p.degree == ma) {
            for(; i<=ma; i++) {
                r.coeff[i] = p.coeff[i];
            }
        } else {
            for(; i<=ma; i++) {
                r.coeff[i] = coeff[i];
            }
        }
        return r;
    }

    Polynomial operator-(Polynomial &p) {
        Polynomial r;
        int ma = max(degree, p.degree);
        r.degree = ma;
        int i;
        for (i=0; i<= min(degree, p.degree); i++) {
            r.coeff[i] = coeff[i] - p.coeff[i];
        }
        if (p.degree == ma) {
            for(; i<=ma; i++) {
                r.coeff[i] = -p.coeff[i];
            }
        } else {
            for(; i<=ma; i++) {
                r.coeff[i] = coeff[i];
            }
        }
        return r;
    }
};