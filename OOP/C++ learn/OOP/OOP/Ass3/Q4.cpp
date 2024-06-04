/*
Enter the integer:12
Number: 12
Is negative? false
Is divisible by 3? true
Absolute value: 12
*/

#include <iostream>
#include <cmath>
using namespace std;
class Number {
private:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
    int getNumber() {
        return num;
    }
    void printNumber() {
        cout << "Number: " << num <<endl;
    }
    bool isNegative() {
        return num < 0;
    }
    bool isDivisibleBy(int n) {
        return num % n == 0;
    }
    int absoluteValue() {
        return std::abs(num);
    }
};
int main() {
    Number numObj;
    int a;
    cout<<"Enter the integer:";
    cin>>a;
    numObj.setNumber(a);
    numObj.printNumber();
    cout << "Is negative? " << boolalpha << numObj.isNegative() <<endl;
    cout << "Is divisible by 3? " << boolalpha << numObj.isDivisibleBy(3) <<endl;
    cout << "Absolute value: " << numObj.absoluteValue() <<endl;
    return 0;
}
