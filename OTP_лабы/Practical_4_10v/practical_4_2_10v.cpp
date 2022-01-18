#include <iostream>
#include <cmath>

using namespace std;

#define EPS 0.01

int main() {
    int n = 1;
    double S = 0, member = 1.0 / pow(1,4);

    cout << "програма вычисляет суму елементов" << endl;
    cout << "числового ряда з заданой точностью eps = " << EPS << endl;


    while (member > EPS) {
        S += member;
        n++;
        member = 1.0 / pow(2*n-1,4);
    }
    cout << "результат вычисления сумы(S) = " << S << endl;
    cout << "количество оборотов цикла n = " << n << endl;
    return 1;
}

