#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double S,x;
    int fact;

    cout << "знайти суму ряда відповідно до варіанту " << endl;
    cout << "використовуючи управляючий оператор for" << endl;

    cout << "введите значение x: ";
    cin >> x;

    S = 0.0;
    fact = 1;
    for (int t = 1; t <= 4; t++) {
        S += pow(log(pow(x,fact) - pow(x,fact) - pow(x,2.0/t)),2);
        fact *= t;
    }
    cout << "результат S = " << S << endl;
    return 1;
}

