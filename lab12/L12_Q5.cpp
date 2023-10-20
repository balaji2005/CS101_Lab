#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[1000];
    cin >> s;
    // char plu[1001] = strcat(s, "s");
    char p[1000] = {'s', '\0'};
    cout << strcat(s, p) << endl;
}
