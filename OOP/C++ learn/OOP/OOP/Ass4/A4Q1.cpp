#include <iostream>
#include <cstring>

class String {
private:
    char *str;
    int length;

public:
    String() {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }

    String(const char *s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }

    String(const String &s) {
        length = s.length;
        str = new char[length + 1];
        strcpy(str, s.str);
    }

    String operator+(const String &s) const {
        String temp;
        temp.length = length + s.length;
        temp.str = new char[temp.length + 1];
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    String& operator=(const String &s) {
        if (this != &s) {
            delete[] str;
            length = s.length;
            str = new char[length + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String s1;
    String s2("Well done!");
    String s3 = s1 + s2;
    std::cout << "s1: ";
    s1.display();
    std::cout << "s2: ";
    s2.display();
    std::cout << "s3: ";
    s3.display();

    return 0;
}
