#include <iostream>
#include <cmath>
using namespace std;

struct Polynomial {
    int degree;
    double coeff[101];

    Polynomial() {
        for (int i=0; i<101; i++) {
            coeff[i] = 0;
        }
    }

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
        for (i=0; i<= ma; i++) {
            r.coeff[i] = coeff[i] + p.coeff[i];
        }
        return r;
    }

    Polynomial operator-(Polynomial &p) {
        Polynomial r;
        int ma = max(degree, p.degree);
        r.degree = ma;
        int i;
        for (i=0; i<= ma; i++) {
            r.coeff[i] = coeff[i] - p.coeff[i];
        }
        return r;
    }

    Polynomial operator*(Polynomial &p) {
        Polynomial r;
        int ma = degree*p.degree;
        r.degree = ma;
        for (int i=0; i<=ma; i++) {
            for (int j=0; j<=i; j++) {
                r.coeff[i] += coeff[j]*coeff[i-j];
            }
        }
        return r;
    }

    void print() {
        cout << coeff[degree] << "x^" << degree;
        for(int i=degree-1; i>0; i--) {
            if (coeff[i] > 0) {
                cout << " + " << coeff[degree] << "x^" << i;
            } else if (coeff[i] < 0) {
                cout << " - " << -coeff[degree] << "x" << i;
            }
        }
        if (coeff[0] > 0) {
            cout << " + " << coeff[degree] << '\n';
        } else if (coeff[0] < 0) {
            cout << " - " << -coeff[degree] << '\n';
        }
    }

    void read() {
        cout << "Enter the degree: " << '\n';
        int degree; cin >> degree;
        Polynomial p;
        p.degree = degree;
        for (int i=degree; i>=0; i--) {
            cin >> p.coeff[i];
        }
        p.print();
    }
};

int main() {
    Polynomial p;
    p.read();
    p.print();
}