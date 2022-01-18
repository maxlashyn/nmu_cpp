#include <iostream>

using namespace std;

int main() {
    int C, N;

    cout << "ВВедіть початкове положенння робота" << endl;
    cout << "(«10» –північ, «20» –захід,  «30» –південь,  «40» –схід): ";
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

    cout << "Доступні команди: " << endl;
      cout << "0 - продовжити рух, 1 - поворот влево, -1 - поворот вправо" << endl;
      cout << "Введіть команду N: " << endl;
      cin >> N;

    C = abs(C - N * 10) % 40;

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

    return 1;
}

