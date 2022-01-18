#include <iostream> // подключаем библиотеку ввода вывода
#include <cmath> // подключаем библиотеку с математическими ф-циями

using namespace std; // используем пространство имен

/*
 * функции для расчета  у при значениях х
 */
double y_if_x_less_zero(double x) {
    return 0;
}

double y_if_x_between_zero_and_one(double x) {
    return 1/(pow(x,2) + 1);
}

double y_if_x_between_one_and_four(double x) {
    return pow(x,3);
}

double y_if_x_more_than_four(double x) {
    return 62+log(x)/log(8);
}

int main() { // главная ф-ция даннойпрограмы

    /*
     * вводим переменные
     */
    double x,
            y;

    /*
     * выводим задание
     */
    cout << "Знайти значення функції У(х):" << endl;

    /*
     * выводим значение с клавиатуры
     */
    cout << "Введіть знвчення х = ";
    cin >> x;

    if(cin.fail()) { // Проверяем что введено число
        cout << "Введенная строка не являеться числом" << endl; // Выводим сообщение об ошибке
        return 0; // Возращаем из ф-ции 0 как признак ошибки при ее выполнении
    }

   /*
    * проверяем в каком диапазоне находиться х и нужную функцию для расчета у
    */
    if (x < 0) {
        y = y_if_x_less_zero(x);
    }


    if (0 <= x && x <= 1) {
        y = y_if_x_between_zero_and_one(x);
    }


    if (1 < x && x<=4) {
        y = y_if_x_between_one_and_four(x);
    }


    if (x > 4) {
        y = y_if_x_more_than_four(x);
    }

    cout << "Результат у = " << y << endl; //выводим результат расчетов

    return 1; // Возвращаем 1  как признак успешного выполнения ф-ции

}



