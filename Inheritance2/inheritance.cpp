#include <iostream>

// Base class (or Parent class)
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }

    void sleep() {
        std::cout << "Animal is sleeping." << std::endl;
    }
};

// Derived class (or Child class)
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    // Create an object of the derived class
    Dog myDog;

    // Accessing methods from the base class
    myDog.eat();    // Inherited from Animal
    myDog.sleep();  // Inherited from Animal

    // Accessing method from the derived class
    myDog.bark();

    return 0;
}
