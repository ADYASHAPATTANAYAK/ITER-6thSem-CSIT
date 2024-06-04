/*
Enter time for T1:
Enter hours: 2
Enter minutes: 35
Enter time for T2:
Enter hours: 3
Enter minutes: 45
T1 = 2 hours and 35 minutes
T2 = 3 hours and 45 minutes
T3 = 6 hours and 20 minutes
*/
#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}

    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }

    void addTime(Time t1, Time t2) {
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours + (minutes / 60);
        minutes %= 60;
    }

    void setTimeFromUserInput() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }
};

int main() {

    Time T1;
    Time T2;
    Time T3;

    cout << "Enter time for T1:" << endl;
    T1.setTimeFromUserInput();
    cout << "Enter time for T2:" << endl;
    T2.setTimeFromUserInput();

    T3.addTime(T1, T2);

    cout << "T1 = ";
    T1.display();
    cout << "T2 = ";
    T2.display();
    cout << "T3 = ";
    T3.display();

    return 0;
}
