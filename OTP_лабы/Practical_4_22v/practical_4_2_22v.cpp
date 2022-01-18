#include <iostream>
#include <cmath>

using namespace std;

#define EPS 0.0005

int main() {
    int n = 1;
    double S = 0, member = 1.0 / 2;

    cout << "програма вычисляет суму елементов" << endl;
    cout << "числового ряда з заданой точностью eps = " << EPS << endl;


    while (member > EPS) {
        S += member;
        n++;
        member = (2 * n - 1) / pow(2,n);
    }
    cout << "результат вычисления сумы(S) = " << S << endl;
    return 1;
}