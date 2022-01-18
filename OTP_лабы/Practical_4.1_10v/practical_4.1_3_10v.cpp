#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c = 5, N = 2,X0 = 1, XN = N, Y, X = X0, step,root,numerator_1,denominator_1,first,degree,
            numerator_2,denominator_2,second;
    int n = int(c + N);
    step = (XN - X0) / n;
    for (int i = 0; i <= n; i++) {
        numerator_1 = pow(N - c,2) + 4 * N * c;
        denominator_1 = pow(N,2) - pow(c,2);
        first = numerator_1 / denominator_1;
        degree = pow(X,first);
        root = pow(degree, 1 / N);

        numerator_2 = X / N + 12;
        denominator_2 = 6 - c * X;
        second = numerator_2 / denominator_2;

        Y = root + second;
        cout << i << " X=" << X << " Y=" << Y << endl;
        X = X + step;
    }
    return 1;

}

