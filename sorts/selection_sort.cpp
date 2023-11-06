#include "sorts.h"

template <typename T>
void selection_sort_l(T arr[], int n) {
    for (int i=0; i<n; i++) {
        int ind = i;
        for (int j=i+1; j<n; j++) {
            if (arr[j] < arr[ind]) {
                ind = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[ind];
        arr[ind] = temp;
    }
}

template <typename T>
void selection_sort_r(T arr[], int n) {
    if (n == 1) return;
    int ind = n-1;
    for (int i=0; i<n-1; i++) {
        if (arr[ind] < arr[i]) {
            ind = i;
        }
    }
    T temp = arr[n-1];
    arr[n-1] = arr[ind];
    arr[ind] = temp;
    selection_sort_r(arr, n-1);
}

// int main() {
//     int n; cin >> n;
//     int arr[n];
//     for (int i=0; i<n; i++) {
//         cin >> arr[i];
//     }
//     selection_sort_r<int>(arr, n);
//     for (int x: arr) {
//         cout << x << ' ';
//     }
//     cout << '\n';
// }