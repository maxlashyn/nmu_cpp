#include <iostream>;

using namespace std;

int main() {
    unsigned int hours, minutes, seconds, seconds_in_fly, end_time, start_date, day;

    cout << "день месяца взльоту: ";
    cin >> start_date;

    cout << "кількість годин під час взльоту: ";
    cin >> hours;

    cout << "кількість хвилин під час взльоту: ";
    cin >> minutes;

    cout << "кількість секунд під час взльоту: ";
    cin >> seconds;

    cout << "кількість секунд знаходження у повітрі: ";
    cin >> seconds_in_fly;

   end_time = hours * 3600 + minutes * 60 + seconds + seconds_in_fly;
   day = end_time / 3600 / 24;
   hours = (end_time - day * 24 * 3600) / 3600;
   minutes = (end_time - (day * 24 + hours) * 3600) / 60;
   seconds = (end_time  - (day * 24 + hours) * 3600 - minutes * 60);

   cout << "дата и время приземления: " << start_date + day << " число " << hours<< ":"  << minutes<< ":"  << seconds << endl;

    return 1;
}
