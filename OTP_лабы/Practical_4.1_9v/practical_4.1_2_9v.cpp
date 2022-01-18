#include <iostream>
#include <cmath>

#define PI 3.14;

using namespace std;

int main() {
    double step,XO, XN, X, Y;
    XO = 0.6 * PI;
    XN = 1.3 * PI;
    step = 0.05 * PI;
    X = XO;

    for (int i = 0; X<=XN; i++) {
        Y = pow(cos(X)/sin(X),2) - exp(X);
        cout << i << " X =" << X << " Y =" << Y << endl;
        X = X + step;
    }
    return 1;
}

