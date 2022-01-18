#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double P;
    int fact;

    P = 0.0;
    fact = 3;

    for (int i = 2; i <= 9 ; i++) {
        fact *= (i+1);
        P *= pow(-1,i) * (fact + log10(i)/(pow(i,2)-fact));
        cout << "результат P = " << P << endl;
    }

    cout << "результат P = " << P << endl;
    return 1;
}

