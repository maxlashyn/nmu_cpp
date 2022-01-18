#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>


using namespace std;

#define ARRAY_SIZE 21

int main() {
    double multiply = 1.0, negate_count = 0, negate_sum = 0;
    int M[ARRAY_SIZE];

    srand((uint) time(nullptr));
    for (int i = 0; i < ARRAY_SIZE; i++) {
        M[i] = (rand() % 2105) - 1000;
        cout << M[i] << endl;
    }

    for(int i = 0; i < ARRAY_SIZE; i++) {
        if(M[i] > 0) {
            multiply *= M[i];
        } else {
            negate_count ++;
            negate_sum += M[i];
        }

    }

    cout << "srednee arifm" << pow(negate_sum/ negate_count, 3) << endl;
    cout << "dobutok" << multiply << endl;
}