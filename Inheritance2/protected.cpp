#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

class Derived : protected Base
{
private:
    int d;

protected:
    int e;

public:
    int f;
    void setdata()
    {
        // a=1; // cannot inherit private members of Base class
        b = 2;
        c = 3;
        d = 4;
        e = 5;
        f = 6;
    }
    void getData()
    {
        // cout << a << endl; // cannot inherit private members of Base class
        cout << b << endl; // can inherit protected members and can be used only inside Derived class
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
        cout << f << endl;
    }
};

int main()
{
    Derived der;
    der.setdata();
    der.getData();
    cout << "------AFTER UPDATING VALES--------" << endl;
    // der.c = 15; // public member of Base class becomes private mem of der class so cannot access here
    // der.d = 1;  // private mem of der class so cannot access here
    der.f = 25; // public member of derived class so we can access only this
    der.getData();

    return 0;
}

/*
NOTES :
-------------------------------------------------------------------------------------------|
                        |   PUBLIC DERIVED  |   PROTECTED DERIVED  |    PRIVATE DERIVED    |
-------------------------------------------------------------------------------------------|
1. PRIVATE-----MEMBERS  |   Not Inherited   |    Not Inherited     |    Not Inherited      |
-------------------------------------------------------------------------------------------|
2. PROTECTED---MEMBERS  |   Protected       |    Protected         |    Private            |
-------------------------------------------------------------------------------------------|
3. PUBLIC------MEMBERS  |   Public          |    Protected         |    Private            |
-------------------------------------------------------------------------------------------|
*/