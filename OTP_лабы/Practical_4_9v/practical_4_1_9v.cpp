#include <iostream>
#include <cmath>

using namespace std;

//int factorial(int i) {
//    if (i == 0 || i == 1) {
//        return 1;
//    }
//
//    return factorial(i - 1) * i;
//}

int main() {

    double S, x;
    int fact;

    cout << "знайти суму ряда відповідно до варіанту " << endl;
    cout << "використовуючи управляючий оператор for" << endl;

    cout << "введите значение x: ";
    cin >> x;

    S = 0.0;
    fact = 1;
    for (int k = 2; k <= 15; k++) {
        fact *= k;
        S += pow(-1, k) * (pow(k,2)/ fact-1) * cos(x * fact);
    }
    cout << "результат S = " << S <<endl;
    return 1;
}

