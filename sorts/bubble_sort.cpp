#include "sorts.h"

template <typename T>
void bubble_sort_l(T arr[], int n) {
    int last = n-1;
    while(last > 0) {
        int t = 0;
        for (int i=0; i<last; i++) {
            if (arr[i] > arr[i+1]) {
                T temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                t = i;
            }
        }
        last = t;
    }
}

int main() {
    int n; cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bubble_sort_l<int>(arr, n);
    for (int x: arr) {
        cout << x << ' ';
    }
    cout << '\n';
}