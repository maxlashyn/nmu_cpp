#include <iostream>
#include <cmath>

using namespace std;

#define EPS 0.0005

int main() {
    int n = 2;
    double S = 0, member = -1 / pow(n, 4), sign = -1;

    cout << " програма вычисляет суму елементов" << endl;
    cout << " числового ряда з заданой точностью eps = " << EPS << endl;

    while (abs(member) > EPS) {
        S += member;

        n++; // n = n + 1
        sign = (n % 2 == 0) ? -1 : 1;
        member = sign / pow(n, 4);
    }
    cout << "результат вычисления сумы(S) = " << S << endl;
    cout << "количество оборотов цикла n = " << n << endl;
    return 1;
}