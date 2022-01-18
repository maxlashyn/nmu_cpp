#include <iostream>;

using namespace std;

int main() {
    unsigned int hours = 3, minutes = 20, seconds, seconds_in_fly = 6900, end_time, day, delay = 10;



    end_time = hours * 3600 + (minutes + delay) * 60  +  seconds_in_fly;

    day = end_time / 3600 / 24;
    hours = (end_time - day * 24 * 3600) / 3600;
    minutes = (end_time - (day * 24 + hours) * 3600) / 60;
    seconds = (end_time  - (day * 24 + hours) * 3600 - minutes * 60);

    cout << "дата и время приземления: " <<  day << " число " << hours<< ":"  << minutes<< ":"  << seconds << endl;

    return 1;
}

