#include <iostream>

using namespace std;

int main(){
    unsigned int D;
    float X = 87.365;

    D = uint(X*10) % 10;

    cout << "перши символ дробової частини: " << D << endl;

    return 1;
}

