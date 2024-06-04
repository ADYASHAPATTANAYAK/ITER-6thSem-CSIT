#include <iostream>
using namespace std;
int main() {
    long long int a = 1, b = 1, c = 0, index = 2;
    while (true) {
        c = a + b;
        a = b;
        b = c;
        index++;

        if (c >= 1000000000) {
            cout << "Index of the first term with 10 digits: " << index <<"-->"<<c<< endl;
            break;
        }
    }
    return 0;
}

/*
Index of the first term with 10 digits: 45-->1134903170

*/
