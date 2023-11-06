#include "sorts.h"

template <typename T>
void merge(T arr[], int a, int b, T x[]) {
    int i=0, j=0;
    for (i<a && j<b;) {
        if (arr[i] < arr[a+j]) {
            x[i+j] = arr[i];
        }
        else {
            x[i+j] = arr[a+j];
        }
    }
    if(i==a) {
        for (int k=j; k<b; k++) {
            x[i+j] = arr[a+j];
        }
    } else {
        for (int k=i; k<a; k++) {
            x[i+j] = arr[i];
        }
    }
}

template <typename T>
void merge_sort(T arr[], int n) {
    if (n == 1) return;
    merge_sort(arr, n/2);
    merge_sort(arr+n/2, n-n/2);
    T x[n];
    merge(arr, n/2, n-n/2, x);
}

// int main() {
//     int n; cin >> n;
//     int arr[n];
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     merge_sort<int>(arr, n);
//     for (int x: arr) {
//         cout << x << ' ';
//     }
//     cout << '\n';
// }