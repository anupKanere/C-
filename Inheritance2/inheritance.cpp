#include <iostream>
using namespace std;

// Base class (or Parent class)
class Animal {
public:
    void eat() {
        cout << "Animal is eating." << endl;
    }

    void sleep() {
        cout << "Animal is sleeping." << endl;
    }
};

// Derived class (or Child class)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking." << endl;
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
