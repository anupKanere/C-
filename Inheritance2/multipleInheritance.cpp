#include <iostream>

using namespace std;

class Base1
{
protected:
    int base1;

public:
    void setBase1(int a) { this->base1 = a; }
    void greet() { cout << "Base 1 Greet" << endl; }
};

class Base2
{
protected:
    int base2;

public:
    void setBase2(int a) { this->base2 = a; }
    void greet() { cout << "Base 2 Greet" << endl; }
};

class Base3
{
protected:
    int base3;

public:
    void setBase3(int a) { this->base3 = a; }
    void greet() { cout << "Base 3 Greet" << endl; }
};

class Derived : public Base1, public Base2, public Base3 
{
public:
    void printValues()
    {
        cout << "Base 1 = " << base1 << endl;
        cout << "Base 2 = " << base2 << endl;
        cout << "Base 3 = " << base3 << endl;
        cout << "Addition of all three numbers is = " << base1 + base2 + base3 << endl;
    }

    void greet()
    {
        Base2::greet();// memtioning which class greet method to call to solve diamon problem
    }
};

int main()
{
    Derived ak;
    ak.setBase1(10);
    ak.setBase2(20);
    ak.setBase3(30);
    ak.printValues();
    ak.greet();

    return 0;
}