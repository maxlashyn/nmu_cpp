#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

int main() {
    int N = 3, c = 3, n;
    double h, X = XO, Z, XO, XN, a, b, V, A, d, e, B, ct;
    XO = PI / N;
    XN = PI;
    n = (3 / 2) * N + c;
    h = (XN - XO) / n;
    X = XO;
    ct = cos(X) / sin(X);
    for (int i = 0; i <= n; i++) {
        a = pow((pow(sin(X), 2) + pow(tan(X), 2)), c);
        b = a + 1;
        V = pow(cos(X), 2) - pow(ct, 2) + 1;
        A = b * V;
        d = pow(cos(X), 2) + pow(ct, 2) + 1;
        e = pow(sin(X), 2) + pow(tan(X), 2) + 1;
        B = d * e;
        Z = A / B;
        cout << i << " X=" << X << " Z=" << Z << endl;
        X = X + h;

    }
    return 0;
}

