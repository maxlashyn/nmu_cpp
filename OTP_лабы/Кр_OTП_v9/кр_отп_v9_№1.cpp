#include <iostream>
#include <cmath>

using namespace std;

void with_ternary_operator(int a, int b , int c) {
    int minimum = a < c? a: c;
    minimum = b < minimum? b: minimum;
    cout << "найменше число: " << minimum << endl;
    cout << " косинус: " << cos(minimum) << endl;
}

void with_if(int a, int b, int c) {
    int minimum;

    if(a < b) {
        minimum = a;
    } else {
        minimum = b;
    }
    if(c < minimum) {
        minimum = c;
    }
    cout << "найменше число: " << minimum << endl;
    cout << " косинус: " << cos(minimum) << endl;
}

int main() {
    int a,b,c;

    cout << "Расчет с помощью тернарного оператора" << endl;

    cout << "введите число 1: ";
    cin >> a;
    cout << "введите число 2: ";
    cin >> b;
    cout << "введите число 3: ";
    cin >> c;

    cout << "введенные числа: " << a << ", " << b << "," << c << endl;

    with_ternary_operator(a, b, c);

    cout << "расчет с помощью if/else" << endl;

    cout << "введите число 1: ";
    cin >> a;
    cout << "введите число 2: ";
    cin >> b;
    cout << "введите число 3: ";
    cin >> c;

    cout << "введенные числа: " << a << ", " << b << "," << c << endl;

    with_if(a, b, c);

    return 1;
}