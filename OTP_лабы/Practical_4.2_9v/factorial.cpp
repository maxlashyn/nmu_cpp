//
// Created by maxim on 17.11.2021.
//

#include "factorial.h"

double factorial(int value) {
    double result = 1.0;
    while (value > 1){
        result *= double(value);
        value --;
    }
    return result;
}
