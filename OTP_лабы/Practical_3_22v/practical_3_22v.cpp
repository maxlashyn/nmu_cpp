#include <iostream>

using namespace std;

float getMultiplicator(int unit_of_length) {
    float multiplicator;
    switch (unit_of_length) {
        case 1:
            multiplicator = 1.0/10;
            break;
        case 2:
            multiplicator = 1000;
            break;
        case 3:
            multiplicator = 1;
            break;
        case 4:
            multiplicator = 1.0/100;
            break;
        case 5:
            multiplicator = 1.0/1000;
            break;
        default:
            multiplicator = 1;
    }
    return multiplicator;
}

int main() {
    float length;
    int unit_of_length;

    cout << "Компъютер выведет введенную длину" << endl;
    cout << "отрезка в метрах" << endl;

    cout << "введите единицу длины отрезка: ";
    cin >> unit_of_length;

    cout << "Введите длину: ";
    cin >> length;

    cout << "длина в метрах: " << length * getMultiplicator(unit_of_length) << endl;
    return 1;
}