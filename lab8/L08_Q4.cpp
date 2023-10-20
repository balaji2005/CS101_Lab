#include <simplecpp>

void read_marks_into(float &marks) {
    cin >> marks;
}

int main() {
    float marks;
    int n;
    cin >> n;
    float sum = 0;
    for(int i=0; i < n; i++) {
        read_marks_into(marks);
        sum += marks;
    }
    cout << sum/n << endl;
}