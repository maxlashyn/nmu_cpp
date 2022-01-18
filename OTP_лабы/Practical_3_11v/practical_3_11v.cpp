#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
SetConsoleOutputCP (1251);
    int C; int N1, N2, N;
    cout << "ВВедіть початкове положенння локатора"<<endl<<"(«10» –північ, «20» –захід,  «30» –південь,  «40» –схід): ";
    cin >> C;

    switch(C)
    {
        case 10: N=0;
            cout <<"Початкове положення-Північ"<<endl;
            break;
        case 20: N=1;
            cout <<"Початкове положення - Захід"<<endl;
            break;
        case 30: N=2;
            cout <<"Початкове положення - Південь"<<endl;
            break;
        case 40: N=-1;
            cout <<"Початкове положення - Схід"<<endl;
            break;
        default:
            cout << "error" << endl;
            return 0;
    }
    cout <<"Доступні команди:"<< endl;
    cout << "0 - нічого не робити, 1-поворот в ліво, -1 - поворот в право, 2- поворот на 180 градусів"<<endl;
    cout << "Введіть команду №1" << endl;
    cin >> N1;
    cout << "Введіть команду №2" << endl;
    cin >> N2;
    switch (N+N1+N2)
    {
        case 0:
            cout << "Північ";
            break;
        case 1:
            cout << "Захід";
            break;
        case -1:
            cout << "Схід";
            break;
        case 2:
            cout << "Південь";
            break;
        case -2:
            cout <<"Південь";
            break;
        case 3:
            cout <<"Схід";
            break;
        case -3:
            cout <<"Захід";
            break;
        case 4:
            cout << "Північ";
            break;
        case 5:
            cout <<"Захід";
            break;
        case 6:
            cout <<"Південь";
            break;
    }
    return 0;
}







//#include <iostream>
//#include <windows.h>
//
//using namespace std;
//int main() {
//SetConsoleOutputCP (1251);
//    int C;
//    int N1, N2;
//    cout << "ВВедіть початкове положенння локатора" << endl
//         << "(«10» –північ, «20» –захід,  «30» –південь,  «40» –схід): ";
//    cin >> C;
//
//    switch (C) {
//        case 10:
//            cout << "Початкове положення-Північ" << endl;
//            break;
//        case 20:
//            cout << "Початкове положення - Захід" << endl;
//            break;
//        case 30:
//            cout << "Початкове положення - Південь" << endl;
//            break;
//        case 40:
//            cout << "Початкове положення - Схід" << endl;
//            break;
//        default:
//            cout << "Направление задано не корректно" << endl;
//            return 0;
//    }
//    cout << "Доступні команди:" << endl;
//    cout << "0 - нічого не робити, 1-поворот в ліво, -1 - поворот в право, 2- поворот на 180 градусів" << endl;
//    cout << "Введіть команду №1" << endl;
//    cin >> N1;
//    cout << "Введіть команду №2" << endl;
//    cin >> N2;
//
//    C = abs(C - N1 * 10 - N2 * 10) % 40;
//
//    switch (C) {
//        case 10:
//            cout << "Північ";
//            break;
//        case 20:
//            cout << "Захід";
//            break;
//        case 30:
//            cout << "Південь";
//            break;
//        default:
//            cout << "Схід";
//    }
//    return 1;
//}








#include <iostream>
#include <set>

using namespace std;
int main() {
    int C;
    int N1, N2;
    std::set<int> a;

    a.insert(0);
    a.insert(1);
    a.insert(2);
    a.insert(-1);
    cout << "ВВедіть початкове положенння локатора" << endl
         << "(«10» –північ, «20» –захід,  «30» –південь,  «40» –схід): ";
    cin >> C;

    switch (C) {
        case 10:
            cout << "Початкове положення-Північ" << endl;
            break;
        case 20:
            cout << "Початкове положення - Захід" << endl;
            break;
        case 30:
            cout << "Початкове положення - Південь" << endl;
            break;
        case 40:
            cout << "Початкове положення - Схід" << endl;
            break;
        default:
            cout << "Направление задано не корректно" << endl;
            return 0;
    }
    cout << "Доступні команди:" << endl;
    cout << "0 - нічого не робити, 1-поворот в ліво, -1 - поворот в право, 2- поворот на 180 градусів, 3 - преравать" << endl;
    while(true) {
        cout << "Введіть команду" << endl;
        cin >> N1;

        if(a.find(N1) == a.end()) {
            return 1;
        }

        C = abs(C - N1 * 10 ) % 40;

        switch (C) {
            case 10:
                cout << "Північ";
                break;
            case 20:
                cout << "Захід";
                break;
            case 30:
                cout << "Південь";
                break;
            default:
                cout << "Схід";
        }
        cout << endl;
    }

}
