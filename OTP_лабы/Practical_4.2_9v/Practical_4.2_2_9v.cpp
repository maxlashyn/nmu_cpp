#include <iostream> //Подключаем библиотеку ввода - вывода
#include <cmath> //Подключаем библиотеку для математических расчетов
#include "factorial.h" // подключаем мой файл с формулой расчета факториала

using namespace std; // указываем пространство имен

#define EPS 0.0001 // указал значение eps

// написал формулу для расчета члена ряда и обозначил в функцию calculate_member
// value --> это какое то значение, в моем случае во время расчета данной формулы програма будет
// подставлять вместо value наше значение n
double calculate_member(int value) {
    return factorial(3 * value - 1) * factorial(value + 1) /(factorial(4 * value) * factorial(2 * value));
}

// Главная функция данной програмы
int main() {

    // добавляем переменные с инт(целыми) и дабл(с плавающей точкой) значениями
    int n = 1;
    double sum = 0, member;

    //вывод задания на консоль
    cout << "програма вычисляет суму елементов" << endl;
    cout << "числового ряда з заданой точностью eps = " << EPS << endl;

    //подставляем в переменную member значение функции calculate_member + указал что вместо value(неизвестного числа)
    //в функцию должно подставляться значение n
    member = calculate_member(n);

    //начало цикла
    while (member > EPS) {
        cout << "last member = " << member << endl;
        sum += member;
        n++;
        member = calculate_member(n);
    };//конец цикла

    //вывод результата
    cout << "last member = " << member << endl;
    cout << "sum = " << sum << endl;

    return 1;//окончание програмы
}
