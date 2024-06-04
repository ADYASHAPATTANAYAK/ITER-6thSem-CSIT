#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Staff {
protected:
    int code;
    string name;
public:
    Staff(int code, std::string name) : code(code), name(name) {}
    virtual void displayInfo() = 0;
};

class Teacher : public Staff {
private:
    string subject;
public:
    Teacher(int code,string name, string subject) : Staff(code, name), subject(subject) {}
    void displayInfo() override {
        cout << "Teacher: " << name << ", Code: " << code << ", Subject: " << subject << endl;
    }
};

class Officer : public Staff {
private:
    int grade;
public:
    Officer(int code, std::string name, int grade) : Staff(code, name), grade(grade) {}
    void displayInfo() override {
        cout << "Officer: " << name << ", Code: " << code << ", Grade: " << grade << endl;
    }
};

class Typist : public Staff {
private:
    int speed;
public:
    Typist(int code, std::string name, int speed) : Staff(code, name), speed(speed) {}
    void displayInfo() override {
        cout << "Typist: " << name << ", Code: " << code << ", Speed: " << speed <<endl;
    }
};

class Publication {
private:
    string title;
public:
    Publication(std::string title) : title(title) {}
    void displayInfo() {
        cout << "Publication: " << title << endl;
    }
};

class Database {
private:
    vector<Staff*> staff;
public:
    void addStaff(Staff* staff) {
        this->staff.push_back(staff);
    }
    void displayAllInfo() {
        for (Staff* s : staff) {
            s->displayInfo();
        }
    }
};

int main() {
    Database db;
    db.addStaff(new Teacher(1, "John", "Math"));
    db.addStaff(new Officer(2, "Jane", 5));
    db.addStaff(new Typist(3, "Bob", 60));
    db.displayAllInfo();
    return 0;
}
