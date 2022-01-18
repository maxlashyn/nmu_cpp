#include <iostream>

using namespace std;

int main(){
    unsigned int D;
    float X;

    cout << "введите число: ";
    cin >> X;

    D = uint(X*10) % 10;

    cout << "перши символ дробової частини: " << D << endl;

    return 1;
}
