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
        if (degree >= 1) {
            if (abs(coeff[degree] - 1) < 1e-5) {
                cout << "x^" << degree;
            } else {
                cout << coeff[degree] << "x^" << degree;
            }
        }
        for(int i=degree-1; i>1; i--) {
            if (coeff[i] > 0) {
                if (abs(coeff[i] - 1) < 1e-5) {
                    cout << " + " << "x^" << i;
                } else {
                    cout << " + " << coeff[i] << "x^" << i;
                }
            } else if (coeff[i] < 0) {
                if (abs(coeff[i] + 1) < 1e-5) {
                    cout << " - " << "x^" << i;
                } else {
                    cout << " - " << -coeff[i] << "x^" << i;
                }
            }
        }
        if (coeff[1] > 0) {
            if (abs(coeff[1] - 1) < 1e-5) {
                cout << " + " << "x";
            } else {
                cout << " + " << coeff[1] << "x";
            }
        } else if (coeff[1] < 0) {
            if (abs(coeff[1] + 1) < 1e-5) {
                cout << " - " << "x";
            } else {
                cout << " - " << -coeff[1] << "x";
            }
        }
        if (coeff[0] > 0) {
            cout << " + " << coeff[0] << '\n';
        } else if (coeff[0] < 0) {
            cout << " - " << -coeff[0] << '\n';
        } else {
            if (degree == 0) cout << 0;
            cout << '\n';
        }
    }

    void read() {
        cout << "Enter the degree: ";
        cin >> degree;
        for (int i=degree; i>=0; i--) {
            cin >> coeff[i];
        }
    }
};

int main() {
    // Polynomial 
    // p.print();p;
    // p.read();
    Polynomial q;
    q.read();
    Polynomial p;
    p.read();
    Polynomial a = p + q; a.print();
    Polynomial b = p - q; b.print();
    Polynomial c = p * q; c.print();
}