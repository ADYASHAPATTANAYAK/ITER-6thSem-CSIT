/*
Final salary: 415
Final salary: 465
Final salary: 505
Final salary: 555
Final salary: 605
Final salary: 655
Final salary: 705
Final salary: 755
Final salary: 805
Final salary: 855
*/
#include <iostream>
using namespace std;
class Employee {
    private:
        int salary;
        int hoursOfWorkPerDay;

    public:
        
        void getInfo(int s, int h) {
            salary = s;
            hoursOfWorkPerDay = h;
        }
 void AddSal() {
            if (salary < 500) {
                salary += 10;
            }
        }
 void AddWork() {
            if (hoursOfWorkPerDay > 6) {
                salary += 5;
            }
        }
 void printSalary() {
            cout << "Final salary: " << salary << endl;
        }
};

int main() {
    Employee managers[10]; 
for (int i = 0; i < 10; i++) {
        managers[i].getInfo(400 + i * 50, 8);
    }
for (int i = 0; i < 10; i++) {
        managers[i].AddSal();
    }
for (int i = 0; i < 10; i++) {
        managers[i].AddWork();
    }
for (int i = 0; i < 10; i++) {
        managers[i].printSalary();
    }

    return 0;
}
