#include <iostream> //Подключаем библиотеку ввода - вывода
#include <cmath> //Подключаем библиотеку для математических расчетов

using namespace std; // указываем пространство имен

#define EPS 0.0001 // указал значение eps

//функция для расчета факториала
double factorial(int value) {
    double result = 1.0;
    while (value > 1) {
        result *= double(value);
        value--;
    }
    return result;
}

// написал формулу для расчета члена ряда и обозначил в функцию calculate_member
// value --> это какое то значение, в моем случае во время расчета данной формулы програма будет
// подставлять вместо value наше значение n
double calculate_member(int value) {
    return pow(factorial(value - 1) / factorial(value + 1), value * (value + 1));
}


// Главная функция данной програмы
int main() {

    // добавляем переменные с инт(целыми) и дабл(с плавающей точкой) значениями
    int n = 2;
    double sum = 0, member;

    //выводим само задание
    cout << "програма вычисляет суму елементов" << endl;
    cout << "бесконечного ряда з заданой точностью eps = " << EPS << endl;


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

    return 1; //конец програмы
}

