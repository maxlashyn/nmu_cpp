#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double step,XO, XN, X, Y;
    XO = -2;
    XN = 1;
    step = 0.3;
    X = XO;

    for (int i = 0; X < XN + step; i++) {
        Y = sin(pow(X,2) + 2);
        cout << i << " X =" << X << " Y =" << Y << endl;
        X = X + step;
    }
    return 1;
}


