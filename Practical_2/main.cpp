#include "iostream"
#include "math.h"

using namespace std;

int main() {
    double S,
        x = 0.21,
        a = 2.15,
        b = 3,
        c = 4.8,
        teta = 4.3,
        numerator,
        denominator;

    cout << "Обчислюємо задану формулу для:" << endl;
    cout << "x = " << x << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "teta = " << teta << endl;

    numerator = pow(sin(3 * x), 3)
            + atan(teta)
            - 6 * pow(10, 3.1);
    denominator = a * x * x + b * x + c;

    S = numerator / denominator + (exp(x) * tan(x + 2));
    cout <<"Результат вычислений S = " << S << endl;
   return 1;
}
