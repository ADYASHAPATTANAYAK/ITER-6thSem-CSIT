#include <iostream>
using namespace std;
int trailingZerosInFactorial(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a non-negative number: ";
    cin >> num;

    int zeros = trailingZerosInFactorial(num);
    cout << "No. of zeros at the end of " << num << "! = " << zeros << endl;

    return 0;
}

/*
Enter a non-negative number: 12
No. of zeros at the end of 12! = 2

*/
