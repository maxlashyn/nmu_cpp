#include <iostream> //Подключаем библиотеку ввода - вывода
#include <cmath> //Подключаем библиотеку с математическими ф-циями

using namespace std; //Используем пространство имен

int main() { // Главная функция данной програмы
    /*
     * Объявляем переменные с плавающей запятой
     * и инициализируем  коэффициенты
     */
    double S,
            x = 0.21,
            a = 2.15,
            b = 3,
            c = 4.8,
            teta = 4.3,
            numerator,
            denominator;

    /*
     * Выводим значение коеффициентов
     */
    cout << "Обчислюємо задану формулу для:" << endl;
    cout << "x = " << x << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "teta = " << teta << endl;

    /*
     * Вычисляем числитель
     */
    numerator = pow(sin(3 * x), 3)
                + atan(teta)
                - 6 * pow(10, 3.1);

    /*
     * Вычисляем знаменатель
     */
    denominator = a * x * x + b * x + c;

    /*
     * Вычисляем значение ф-ции
     */
    S = numerator / denominator + (exp(x) * tan(x + 2));

    cout << "Результат вычислений S = " << S << endl; // Выводим результат на консоль

    return 1; // Возвращаем 1 как признак успешного выполнения ф-ции
}
