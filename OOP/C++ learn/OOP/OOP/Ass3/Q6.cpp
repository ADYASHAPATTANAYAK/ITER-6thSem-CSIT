/*
Enter distance in meters and centimeters:
Enter distance in meters: 2
Enter distance in centimeters: 56
Enter distance in feet and inches:
Enter distance in feet: 3
Enter distance in inches: 6
Distance in meters and centimeters: 2m 71cm
*/
#include <iostream>
using namespace std;

class DB; // forward declaration

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    friend DM add(const DM& dm, const DB& db);

    void display() {
        cout << "Distance in meters and centimeters: " << meters << "m " << centimeters << "cm" << endl;
    }

    void setFromUserInput() {
        cout << "Enter distance in meters: ";
        cin >> meters;
        cout << "Enter distance in centimeters: ";
        cin >> centimeters;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft = 0, int in = 0) : feet(ft), inches(in) {}

    friend DM add(const DM& dm, const DB& db);

    void display() {
        cout << "Distance in feet and inches: " << feet << "ft " << inches << "in" << endl;
    }

    void setFromUserInput() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
    }
};

DM add(const DM& dm, const DB& db) {
    int totalMeters = dm.meters + db.feet * 0.3048; // 1 foot = 0.3048 meters
    int totalCentimeters = dm.centimeters + db.inches * 2.54; // 1 inch = 2.54 centimeters

    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters %= 100;
    }

    return DM(totalMeters, totalCentimeters);
}

int main() {
    DM dm1;
    DB db1;

    cout << "Enter distance in meters and centimeters:" << endl;
    dm1.setFromUserInput();

    cout << "Enter distance in feet and inches:" << endl;
    db1.setFromUserInput();

    DM result = add(dm1, db1);
    result.display();

    return 0;
}
