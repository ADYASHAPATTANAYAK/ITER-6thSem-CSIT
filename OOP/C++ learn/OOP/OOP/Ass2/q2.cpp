#include <iostream>
using namespace std;

void myFunction(char c, int i, float f = 0.0f, double d = 6.28) {
    cout << "Char: " << c << ", Int: " << i << ", Float: " << f << ", Double: " << d << endl;
}

int main() {
    myFunction('a', 1, 2.5f, 3.14);
    myFunction('b', 2, 3.5f);
    myFunction('c', 3);
    return 0;
}

/*
Char: a, Int: 1, Float: 2.5, Double: 3.14
Char: b, Int: 2, Float: 3.5, Double: 6.28
Char: c, Int: 3, Float: 0, Double: 6.28
*/
