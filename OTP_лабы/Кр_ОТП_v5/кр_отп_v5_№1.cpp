
#include <iostream>

using namespace std;

int main() {
    int a1, b2, c3;
    int t;

    cout << "Введите число 1: ";
    cin >> a1;

    cout << "Введите число 2: ";
    cin >> b2;

    cout << "Введите число 3: ";
    cin >> c3;

    t = a1;
    a1 = a1 < b2? a1: b2;
    b2 = t < b2? b2: t;

    t = a1;
    a1 =  a1 < c3? a1: c3;
    c3 = t < c3? c3: t;

    t = b2;
    b2 = b2 < c3? b2: c3;
    c3 = t < c3? c3: t;

    /*
    if(b2 < a1) {
        t = b2;
        b2 = a1;
        a1 = t;
    }

    if (c3 < a1) {
        t = c3;
        c3 = a1;
        a1 = t;

    }
    if(c3 < b2) {
        t = c3;
        c3 = b2;
        b2 = t;

    }
*/
    cout << a1 << " " << b2 << " " << c3 << endl;

    return 1;
}
