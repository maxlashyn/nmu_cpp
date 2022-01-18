#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    int N = 3, c = 3,n;
    double  Z,step, XO = PI / N, X = XO, XN = PI, first, second, third,tg,
    numerator_1,denominator_1,numerator_2,denominator_2;
    n = (3 / 2) * N + c;
    step = (XN - XO) / n;
    for (int i = 0; i <= n; i++) {
        numerator_1 = 1 - cos(4 * X);
        denominator_1 = pow(cos(2 * X),-2) - 1;
        first = numerator_1 / denominator_1;

        numerator_2 = 1 + cos(4 * X);
        denominator_2 = pow(sin(2 * X),-2) - 1;
        second = numerator_2 / denominator_2;

        tg = tan(2 * PI / 9 - X);
        third = pow(tg,c / N);

        Z = first + second + third;

        cout << i << " X=" << X << " Z=" << Z << endl;
        X = X + step;
    }
    return 1;
}
