#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c = 5, N = 2, denominator_1, numerator_2, denominator_2, second, first,
     X0 = 1, XN = N,step, Y, X = X0, degree, numerator_1,sum,product;
    int n = int(c + N);
    step = (XN - X0) / n;
    degree = 1 / c;
    for (int i = 0; i <= n; i++) {
        numerator_1 = pow(c,3/2) + 27 * pow(X,3/5);
        denominator_1 = pow(c,1/2) + 3 * pow(X,1/5);
        first = numerator_1 / denominator_1;

        sum = first + 3 * pow(32 * X * X,1/10);

        product = sum * pow(X,-2);

        numerator_2 = 1 + pow(X,degree) + pow(X,2);
        denominator_2 = (N - X) + 7/3;
        second = numerator_2 / denominator_2;

        Y = pow(product,c) + second;

        cout << i << " X=" << X << " Y=" << Y << endl;
        X = X + step;
    }
    return 1;

}

