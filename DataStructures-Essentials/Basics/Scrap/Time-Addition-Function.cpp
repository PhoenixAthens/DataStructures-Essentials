#include <iostream>
using namespace std;

class Time {
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    friend Time addTime(const Time &t1, const Time &t2);

    void display() const {
        cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    }
};

Time addTime(const Time &t1, const Time &t2) {
    int totalSeconds = t1.seconds + t2.seconds;
    int totalMinutes = t1.minutes + t2.minutes + (totalSeconds / 60);
    int totalHours = t1.hours + t2.hours + (totalMinutes / 60);

    return Time(totalHours, totalMinutes % 60, totalSeconds % 60);
}

int main() {
    int hr1,min1,sec1;
    cout << "Enter the hr, min, sec values separated by a single space: ";
    cin >> hr1 >> min1 >> sec1;
    
    int hr2,min2,sec2;
    cout << "Enter another set of hr, min, sec values separated by a single space: ";
    cin >> hr2 >> min2 >> sec2;
    Time t1(hr1, min1, sec1);
    Time t2(hr2, min2, sec2);

    Time result = addTime(t1, t2);

    cout << "The sum of times is: ";
    result.display();

    return 0;
}
