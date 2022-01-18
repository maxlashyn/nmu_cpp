#include <cmath> //Подключаем библиотеку для математических расчетов
#include <iostream> //Подключаем библиотеку ввода - вывода

using namespace std; // указываем пространство имен

#define EPS 0.0001 // указал значение eps
#define X 1.0 / 11.0 // X = 1 / m; m -- номер в списке: m = 11 --> X = 1 / 11

//функция для расчета факториала
double factorial(int value) {
    double result = 1.0;
    while (value > 1) {
        result *= double(value);
        value--;
    }
    return result;
}

// функция для расчета факториала на который увеличеваеться каждый следующий член ряда
double factorial3(int value) {
    double result = 1.0;

    // начало цикла
    while (value > 0){
        result *= double(value) * 3.0 ;
        value --;
    } //конец цикла
    return result; // окончание данной функции
}


//главная функция данной програмы
int main() {

    //добавил переменные double
    double sum = 0, member = 1;

    //вывод задания на консоль
    cout << "програма вычисляет суму елементов" << endl;
    cout << "числового ряда з заданой точностью eps = " << EPS << endl;

    //начало цикла
    for (int n = 1; member > EPS; n++) {
        sum += member ;
        member = factorial(n)/ factorial3(n) * pow(X, n) * pow(-1, n + 1);
        cout << "member = " << member << endl;
    } // конец цикла

    //вывод результата
    cout << "sum = " << sum << endl;

    return 1;//окончание програмы
}


