#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double S, x;
    int fact;

    cout << "знайти суму ряда відповідно до варіанту " << endl;
    cout << "використовуючи управляючий оператор for" << endl;

    cout << "введите значение x: ";
    cin >> x;

    S = 0.0;
    fact = 1;
    for (int i = 3; i <= 7; i++) {
        fact *= (i - 1);
        S += pow(x, -i) * (fact / pow(i, 2) + pow(sin(x), 2));
    }
    cout << "результат S = " << S << endl;
    return 1;
}

