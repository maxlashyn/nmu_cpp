#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double c = 5, N = 2, n, L, K, T, V, W, U, R, X0 = 1, XN = N, h, Y,X = X0, m, d, p, F, s;
    n = c + N;
    h = (XN - X0) / n;
    m = 2 / c;
    s = 2 / N;
    d = 1 / N;
    p = 1 / c;
    for (int i = 0; i <= n; i++) {
        F = pow((pow(X, m) + pow(N, m)), 2);
        L = F - 4 * pow(X, (m + s));
        U = pow((pow(X, d) + pow(X, p)), 2);
        K = U + 3 * pow(X, (d + p));
        T = pow((L / K), (1 / 2));
        V = pow(X, 2) + 2 * X - 4;
        W = c + X;
        R = V / W;
        Y = T + R;
        cout << i << " X=" << X << " Y=" << Y << endl;
        X = X + h;
    }
    return 0;

}

