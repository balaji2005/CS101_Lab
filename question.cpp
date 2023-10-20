#include <simplecpp>
#define dbg(x) cout << (#x) << " = " << x << '\n';

int main() {
    int m = 44;
    int *p = &m;
    int &r = m;
    int n = (*p)++;
    int *q = p;
    r = --(*p) + 1;
    ++*q;
    int **x = &p;
    dbg(m) dbg(p) dbg(q) dbg(*p) dbg(*q) dbg(r) dbg(n) dbg(*x) dbg(&m) dbg(&r)
}