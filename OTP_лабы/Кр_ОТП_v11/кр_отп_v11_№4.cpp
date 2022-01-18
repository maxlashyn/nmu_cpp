#include <iostream>

using namespace std;

int main() {
    unsigned int hours = 19, minutes = 27, seconds = 11, seconds_in_fly = 80306, end_time, start_date = 7, day;


    end_time = hours * 3600 + minutes * 60 + seconds + seconds_in_fly;
    day = end_time / 3600 / 24;
    hours = (end_time - day * 24 * 3600) / 3600;
    minutes = (end_time - (day * 24 + hours) * 3600) / 60;
    seconds = (end_time  - (day * 24 + hours) * 3600 - minutes * 60);

    cout << "дата и время приземления: " << start_date + day << " число " << hours<< ":"  << minutes<< ":"  << seconds << endl;

    return 1;
}


