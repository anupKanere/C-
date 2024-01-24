#include <iostream>
/*
UNION is a user-defined data type that allows you to store different types of
data in the same memory location. Unlike structures (structs), where each member
has its own separate memory space, members of a union share the same memory location.
The size of a union is determined by the size of its largest member.
*/
using namespace std;

union myUnion
{
    int a;
    char b;
    float c;
    double d;
};
// size of the union will be 8 bytes bcoz it is the largest data type

int main()
{
    union myUnion u1;
    u1.a = 10;
    cout << "Value of a = " << u1.a << endl;

    u1.b = 'a';
    cout << "Value of a = " << u1.b << endl;

    u1.c = 24.55f;
    cout << "Value of a = " << u1.c << endl;

    u1.d = 99.99;
    cout << "Value of a = " << u1.d << endl;
    // cout << "Value of a = " << u1.a << endl; // if we print u1.a then we will get any garbage value because last it was updated by u1.d

    return 0;
}
