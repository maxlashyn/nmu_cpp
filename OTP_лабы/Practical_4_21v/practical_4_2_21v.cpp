#include <iostream>
#include <cmath>

using namespace std;

#define EPS 0.00005

int main() {
    int n = 2;
    double S = 0,x, member, sign = -1;

    cout << " програма вычисляет суму елементов" << endl;
    cout << " числового ряда з заданой точностью eps = " << EPS << endl;

    cout << " Введите значение X: ";
    cin >> x;
    member = pow(sign,n) * (pow(x,2*n-1)/2*n+1);
    while (abs(member) > EPS) {
        S += member;

        n++; // n = n + 1
        sign = (n % 2 == 0) ? -1 : 1;
        member = pow(sign,n) * (pow(x,2*n+1)/2*n+1);
    }
    cout << "результат вычисления сумы(S) = " << S << endl;
    cout << "количество оборотов цикла n = " << n << endl;
    return 1;
}
