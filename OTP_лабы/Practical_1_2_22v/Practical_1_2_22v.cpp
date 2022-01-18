#include <iostream> //Подключаем библиотеку ввода - вывода
#include <cmath> //Подключаем библиотеку с математическими ф-циями

using namespace std; //Используем пространство имен

int main() { // Главная функция данной програмы
    /*
     * Объявляем переменные с плавающей запятой
     * и инициализируем  коэффициенты
     */
    double result,
            a = 150,
            pi= 3.14,
            b = 3.2 * pow(10,3),
            x = -4.18;

    /*
     * Выводим значение коеффициентов
     */
    cout << "Обчислюємо задану формулу для:" << endl;
    cout << "pi = " << pi << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "x = " << x << endl;

    /*
     * Вычисляем значение ф-ции
     */
    result = log10(fabs(1 + a)) + exp(pi + x) / 3,2 * pow(10, 1.6)
    * cos(log10(fabs(b))) + pow(acos(fabs(x/100)), 1/2);

    cout << "Результат вычислений result = " << result << endl; // Выводим результат на консоль

    return 1; // Возвращаем 1 как признак успешного выполнения ф-ции

}

