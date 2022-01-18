//
// Created by maxim on 11.10.2021.
//
#include <iostream>

using namespace  std;
void show_time(int start_day, int end_time) {
    unsigned int day, hours, minutes, seconds;

    day = end_time / 3600 / 24;
    hours = (end_time - day * 24 * 3600) / 3600;
    minutes = (end_time - (day * 24 + hours) * 3600) / 60;
    seconds = (end_time  - (day * 24 + hours) * 3600 - minutes * 60);

    cout << "дата и время приземления: " << start_day + day << " число " << hours<< ":"  << minutes<< ":"  << seconds << endl;
}