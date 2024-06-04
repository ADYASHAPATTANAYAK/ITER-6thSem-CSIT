#include <iostream>

// Mammals class
class Mammals {
public:
    void print() {
        std::cout << "I am a mammal" << std::endl;
    }
};

// MarineAnimals class
class MarineAnimals {
public:
    void print() {
        std::cout << "I am a marine animal" << std::endl;
    }
};

// BlueWhale class inheriting both Mammals and MarineAnimals
class BlueWhale : public Mammals, public MarineAnimals {
public:
    void print() {
        std::cout << "I belong to both the categories: Mammals as well as Marine Animals" << std::endl;
    }
};

int main() {
    // Object for Mammals class
    Mammals mammal;
    // Calling function of Mammals by the object of Mammals
    mammal.print();

    // Object for BlueWhale class
    BlueWhale blueWhale;
    // Calling function of BlueWhale by the object of BlueWhale
    blueWhale.print();
    // Calling function of each of its parent by the object of BlueWhale
    blueWhale.Mammals::print();
    blueWhale.MarineAnimals::print();

    // Object for MarineAnimals class
    MarineAnimals marineAnimal;
    // Calling function of MarineAnimal by the object of MarineAnimal
    marineAnimal.print();

    return 0;
}
