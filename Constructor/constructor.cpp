#include <iostream>
using namespace std;
/*
Copy Constructor : 
-   a copy constructor is a special member function
that initializes an object using another object of the same class.
-   It is called when a new object is created as a copy of an existing object
-   If a copy constructor is not provided, the compiler generates a
default copy constructor that performs a shallow copy
*/
class Number
{
private:
    int x;

public:
    Number();            // default constructor
    Number(int a);       // parameterized constructor
    Number(Number &obj); // copy constructor
    void show();
};

void Number ::show()
{
    cout << "Value of x is : " << x << endl;
}

Number ::Number()
{
    x = 0;
    cout << "Default constructor called " << endl;
}

Number ::Number(int a)
{
    cout << "Parameterized constructor called " << endl;
    x = a;
}

Number ::Number(Number &obj)
{
    cout << "Copy constructor called" << endl;
    x = obj.x;
}

int main()
{
    Number n1, n2(11), n3, n5;
    n1.show();
    n2.show();
    n3.show();
    n5 = n2;        // copy constr will not be invoked
    Number n6 = n2; // copy constr will be involed
    n5.show();
    Number n4(n2); // copy constr invoked
    n4.show();
    return 0;
}