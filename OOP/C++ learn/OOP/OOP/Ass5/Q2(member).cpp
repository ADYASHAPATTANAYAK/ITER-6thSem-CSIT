/*
Count: 1
Count: 2
Count: 1
*/

// Member function

#include <iostream>

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading pre-increment (++x)
    Counter& operator++() {
        count++;
        return *this;
    }

    // Overloading post-increment (x++)
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display() {
        std::cout << "Count: " << count << std::endl;
    }
};

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
