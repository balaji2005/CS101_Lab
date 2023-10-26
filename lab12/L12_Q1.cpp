#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int len(int a) {
    int i=0;
    while(a >= 1) {
        a/=10;
        i++;
    }
    return i;
}

int digit(int a, int i) {
    int n = len(a);
    return (a % (int) pow(10, i))/pow(10, i - 1);
}

int main() {
    int a = 345;
    while (true) {
        cin >> a;
        char s[1000] = "";
        int n = len(a);
        // cout << digit(987654321, 5) << endl;
        if (len(a) == 3) {
            switch(digit(a, 3)) {
                case 1: strcat(s, "One hundred "); break;
                case 2: strcat(s, "Two hundred "); break;
                case 3: strcat(s, "Three hundred "); break;
                case 4: strcat(s, "Four hundred "); break;
                case 5: strcat(s, "Five hundred "); break;
                case 6: strcat(s, "Six hundred "); break;
                case 7: strcat(s, "Seven hundred "); break;
                case 8: strcat(s, "Eight hundred "); break;
                case 9: strcat(s, "Nine hundred "); break;
            }
            // strcat(s, "and ");
            switch(digit(a, 2)) {
                case 1:
                    switch(digit(a, 1)) {
                        case 1: strcat(s, "eleven"); break;
                        case 2: strcat(s, "twelve"); break;
                        case 3: strcat(s, "thirteen"); break;
                        case 4: strcat(s, "fourteen"); break;
                        case 5: strcat(s, "fifteen"); break;
                        case 6: strcat(s, "sixteen"); break;
                        case 7: strcat(s, "seventeen"); break;
                        case 8: strcat(s, "eighteen"); break;
                        case 9: strcat(s, "ninteen"); break;
                        case 0: strcat(s, "ten"); break;
                    }
                    break;
                case 2: strcat(s, "twenty "); break;
                case 3: strcat(s, "thirty "); break;
                case 4: strcat(s, "forty "); break;
                case 5: strcat(s, "fifty "); break;
                case 6: strcat(s, "sixty "); break;
                case 7: strcat(s, "seventy "); break;
                case 8: strcat(s, "eighty "); break;
                case 9: strcat(s, "ninty "); break;
            }
            if (digit(a, 2) != 1) {
                switch(digit(a, 1)) {
                    case 1: strcat(s, "one"); break;
                    case 2: strcat(s, "two"); break;
                    case 3: strcat(s, "three"); break;
                    case 4: strcat(s, "four"); break;
                    case 5: strcat(s, "five"); break;
                    case 6: strcat(s, "six"); break;
                    case 7: strcat(s, "seven"); break;
                    case 8: strcat(s, "eight"); break;
                    case 9: strcat(s, "nine"); break;
                }
            }
        }
        if (len(a) == 2) {
            switch(digit(a, 2)) {
                case 1:
                    switch(digit(a, 1)) {
                        case 1: strcat(s, "Eleven "); break;
                        case 2: strcat(s, "Twelve "); break;
                        case 3: strcat(s, "Thirteen "); break;
                        case 4: strcat(s, "Fourteen "); break;
                        case 5: strcat(s, "Fifteen "); break;
                        case 6: strcat(s, "Sixteen "); break;
                        case 7: strcat(s, "Seventeen "); break;
                        case 8: strcat(s, "Eighteen "); break;
                        case 9: strcat(s, "Ninteen "); break;
                        case 0: strcat(s, "Ten");
                    }
                    break;
                case 2: strcat(s, "Twenty "); break;
                case 3: strcat(s, "Thirty "); break;
                case 4: strcat(s, "Forty "); break;
                case 5: strcat(s, "Fifty "); break;
                case 6: strcat(s, "Sixty "); break;
                case 7: strcat(s, "Seventy "); break;
                case 8: strcat(s, "Eighty "); break;
                case 9: strcat(s, "Ninty "); break;
            }
            if (digit(a, 2) != 1) {
                switch(digit(a, 1)) {
                    case 1: strcat(s, "one"); break;
                    case 2: strcat(s, "two"); break;
                    case 3: strcat(s, "three"); break;
                    case 4: strcat(s, "four"); break;
                    case 5: strcat(s, "five"); break;
                    case 6: strcat(s, "six"); break;
                    case 7: strcat(s, "seven"); break;
                    case 8: strcat(s, "eight"); break;
                    case 9: strcat(s, "nine"); break;
                }
            }
        }
        if (len(a) == 1) {
            switch(digit(a, 1)) {
                case 1: strcat(s, "One"); break;
                case 2: strcat(s, "Two"); break;
                case 3: strcat(s, "Three"); break;
                case 4: strcat(s, "Four"); break;
                case 5: strcat(s, "Five"); break;
                case 6: strcat(s, "Six"); break;
                case 7: strcat(s, "Seven"); break;
                case 8: strcat(s, "Eight"); break;
                case 9: strcat(s, "Nine"); break;
            }
        }
        if (a == 0) strcat(s, "Zero");
        cout << s << endl;
    }
}