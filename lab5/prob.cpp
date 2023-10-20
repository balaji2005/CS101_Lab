#include <simplecpp>
#define ll long long int

int length(ll n) {
	int i = 1;
	for (; n/i; i*=10) {}
	return log10(i);
}

int digit(ll n, int i) {
	int l = length(n);
	ll rem1 = n % (ll) pow(10, l-i+1);
	ll rem2 = n % (ll) pow(10, l-i);
	return digit((rem1 - rem2), 1);
}

void swap(ll& n, int i, int j) {
	ll l = length(n);
	ll di = digit(n, i);
	ll dj = digit(n, j);

	n += (dj - di)*(ll) pow(10, l-i);
	n += (di - dj)*(ll) pow(10, l-j);
}

int main() {
	ll n;
	cin >> n;

	int l = length(n);

	for (int j=1; j <= l; j++) {
		for (int i=1; i <= l-1; i++) {
			if (digit(n, i) > digit(n, i+1)) {
				swap(n, i, i+1);
			}
		}
	}
	cout << n << endl;
}
