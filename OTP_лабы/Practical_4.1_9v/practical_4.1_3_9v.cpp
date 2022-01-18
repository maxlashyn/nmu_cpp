#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c = 5, N = 2, denominator_1, numerator_2, denominator_2, second, numerator_3, first,
    denominator_3, X0 = 1, XN = N,step, third, Y, X = X0, degree, numerator_1;
    int n = int(c + N);
    step = (XN - X0) / n;
    degree = 1 / N;
    for (int i = 0; i <= n; i++) {
        numerator_1 = X - c;
        denominator_1 = pow(X,3/4) + pow(X,degree) * pow(c,1/4);
        first = numerator_1 / denominator_1;

        numerator_2 = pow(X,1/2) * pow(c,1/4) + pow(N,1/4);
        denominator_2 = pow(X,1/2) + pow(c,1/2);
        second = numerator_2 / denominator_2;

        numerator_3 = pow(X,1/4) * pow(c, -1/4);
        denominator_3 = pow(X,1/2) - 2 * pow(X,1/4) * pow(c,1/4) + pow(c,degree);
        third = numerator_3 / denominator_3;

        Y = first * second * third;
        cout << i << " X=" << X << " Y=" << Y << endl;
        X = X + step;
    }
    return 1;

}
