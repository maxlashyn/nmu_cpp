#include <iostream>
#include <cmath>

#define PI 3.14
#define ctan(x) 1/tan(x)

using namespace std;

int main() {
    int N = 3, c = 3,n;
    double  Z,step, XO = PI / N, X = XO, XN = PI, first,ctg, second, third, fourth;
    n = (3 / 2) * N + c;
    step = (XN - XO) / n;
    for (int i = 0; i <= n; i++) {
        first = pow(sin(2 * X), 2);

        second = cos(PI / 3 - 2 * X);

        third = sin(2 * X - PI / 6);

        ctg = ctan((PI + X) / (X + 1));
        fourth = pow(ctg * ctg, 1/X);

        Z = first - second * third - fourth;

        cout << i << " X=" << X << " Z=" << Z << endl;
        X = X + step;
    }
    return 1;
}

