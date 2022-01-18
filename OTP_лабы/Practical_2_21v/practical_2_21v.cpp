#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double k,x,y;

    cout << "найти значение k зная диапазон зачений х и у по условию задачи" << endl;

    cout << "Введите значение х: ";
    cin >> x;

    cout << "Введите значение у: ";
    cin >> y;

    if (x < -10 && y < -5) {
        k = 2 / y - 4 / x;
    } else
        if(-10 <= x && x < 0 && -5 <= y && y < 0) {
            k = (x - y - 2) / (x + y);
        } else
            if (0 <= x && x < 2 * M_PI && 0 <= y && y < M_PI / 2) {
                k = (asin(x) + acos(x)) / asin(y);
            } else {
                k = log10(pow(x,2) + pow(y,2));
            }

    cout << "Результат k: " << k << endl;

    return 1;
}