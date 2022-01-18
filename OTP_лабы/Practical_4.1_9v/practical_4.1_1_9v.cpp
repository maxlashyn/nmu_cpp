#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N = 14;
    double XO = 1, XN = 20, X = XO, Y, H;
    H = (XN - XO) / N;

    for (int i = 0; i <= N; i++) {
        Y = sin(X) / (2 + cos(X));
        cout << i << " X =" << X << " Y =" << Y << endl;
        X = X + H;
    }

    return 1;

}