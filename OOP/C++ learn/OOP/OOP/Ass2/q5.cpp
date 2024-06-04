#include <iostream>
#include <cmath>
using namespace std;
void power(double m, double n = 2) {
        double result = pow(m, n);
        cout << "Result is: " << result << endl;

}
//2.5

void power(int m, double n=2){
        double result = pow(m, n);
        cout << "Result is: " << result << endl;
}

int main() {
    int m_int;
    double m_double, n;
    cout << "Enter the value of m(int): ";
    cin >> m_int;
    power(m_int);

    cout << "Enter the value of m(double): ";
    cin >> m_double;
    power(m_double);

    cout << "Enter the value of m(int): ";
    cin >> m_int;

    cout << "Enter the value of n (optional, default is 2): ";
    cin >> n;
    power(m_int,n);

    return 0;
}
