#include <iostream> //Подключаем библиотеку ввода - вывода
#include <cmath> //Подключаем библиотеку для математических расчетов

using namespace std; // указываем пространство имен

#define EPS 0.0001 // указала значение eps
#define x_square 144 // x = 1 + m --> m -- это номер в списке: в моем случае x = 1 + 11 => x = 12;-->
// --> поэтому x^2 = 12 * 12 => x^2 = 144; x^2 --> x_square

// написал формулу для расчета члена ряда и обозначил в функцию calculate_member
// value --> это какое то значение, во время расчета данной формулы програма будет
// подставлять вместо value значение указанное в условии задания
double calculate_member(int value) {
    double value_square = value * value;
    return (value + value / (2.0 + value)) / ( x_square * (1 + value_square * x_square) * pow(value_square - 1,0.5));
}

//главная функция програмы
int main() {

    //добавил переменные int и double
    int n = 2;
    double sum = 0, member;

    //вывод задания на консоль
    cout << "програма вычисляет суму елементов" << endl;
    cout << "числового ряда з заданой точностью eps = " << EPS << endl;

    //подставляем в переменную member значение функции calculate_member + указал что вместо value(неизвестного числа)
    //в функцию должно подставляться значение n
    member = calculate_member(n);

    //начало цикла
    while (member > EPS) {
        sum += member;
        n++;
        member = calculate_member(n);
    };//конец цикла

    //вывод результата
    cout << "last member = " << member << endl;
    cout << "sum = " << sum << endl;

    return 1; //окончание програмы
}

