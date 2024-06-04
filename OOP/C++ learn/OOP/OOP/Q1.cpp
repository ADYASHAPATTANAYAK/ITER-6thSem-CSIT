#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Getter functions
    int getHours() { return hours; }
    int getMinutes() { return minutes; }
    int getSeconds() { return seconds; }

    // Function to display time in hh:mm:ss format
    void showTime() {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main() {
    // Create time objects
    Time t1(12, 30, 45);
    Time t2(15, 20);
    Time t3(18);

    // Display time objects
    cout << "Time 1: ";
    t1.showTime();

    cout << "Time 2: ";
    t2.showTime();

    cout << "Time 3: ";
    t3.showTime();

    return 0;
}
