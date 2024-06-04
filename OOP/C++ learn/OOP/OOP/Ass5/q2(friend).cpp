/*
Count: 1
Count: 2
Count: 1
*/

// friend function

#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void display() {
        std::cout << "Count: " << count << std::endl;
    }

    // Friend function for pre-increment (++x)
    friend Counter& operator++(Counter& c);

    // Friend function for post-increment (x++)
    friend Counter operator++(Counter& c, int);
};

// Definition of friend function for pre-increment (++x)
Counter& operator++(Counter& c) {
    c.count++;
    return c;
}

// Definition of friend function for post-increment (x++)
// post increment mein int lena padta hai
Counter operator++(Counter& c, int) {
    Counter temp = c;
    c.count++;
    return temp;
}

int main() {
    Counter c1;
    
    // Pre-increment
    ++c1;
    c1.display();  // Output: Count: 1
    
    // Post-increment
    Counter c2 = c1++;
    c1.display();  // Output: Count: 2
    c2.display();  // Output: Count: 1
    return 0;
}
