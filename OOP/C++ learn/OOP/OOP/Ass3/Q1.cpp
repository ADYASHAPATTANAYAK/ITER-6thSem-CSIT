/*
Enter Salary : 150
Enter no. of hours : 20
Salary: 150, Hours: 20
Final salary: 165
*/

#include<iostream>
using namespace std;
class Employee{
        private:
                int salary;
                int hour;
        public:
                Employee(int s, int h) : salary(s), hour(h) {}
                void getInfo() {
                        cout << "Salary: " << salary << ", Hours: " << hour << endl;
                }
                void AddSal() {
                        if (salary < 500) {
                                salary += 10;
                        }
                }
                void AddWork() {
                        if (hour > 6) {
                                salary += 5;
                        }
                }
                int getSalary() {
                        return salary;
                }
                
};
int main() {
        int sal,hrs;
        cout<<"Enter Salary : ";
        cin>>sal;
        cout<<"Enter no. of hours : ";
        cin>>hrs;
        Employee e(sal, hrs);
        e.getInfo();
        e.AddSal();
        e.AddWork();
        cout << "Final salary: " << e.getSalary() << endl;
        return 0;
}
