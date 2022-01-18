#include <iostream>

using namespace std;

int main() {
    unsigned int h,K;

    cout << "введите число: ";
    cin >> K;

    h = K / 100 % 10;

    cout << "третий символ с конца: " << h << endl;
    return 1;
}

