#include <iostream>
/*
 -  a friend function is a function that is not a member of a class but is given
    special access to the private and protected members of that class. This means
    that a friend function can access private and protected data members and member
    functions of the class it is declared as a friend to.
 -  can be invoked without the help of any object
 -  it cannot access the members directly by their names and need object _name.member_name
    to acecss any member
-   we can also make clas as a friend ...syntax : `friend class className`;
*/
using namespace std;

class Sum
{
private:
    int x;
    int y;

public:
    void setData(int a, int b) 
    {
        x = a;
        y = b;
    }

    friend Sum addCoordinates(Sum s1, Sum s2); // Declaration of friend function
    void printCoordinates();
};

void Sum ::printCoordinates()
{
    cout << "x  = " << x << endl;
    cout << "y  = " << y << endl;
}

Sum addCoordinates(Sum s1, Sum s2)
{
    Sum result;
    result.x = s1.x + s2.x;
    result.y = s1.y + s2.y;
    return result;
}

int main()
{
    Sum sum1, sum2, sum3;
    sum1.setData(10, 20);
    sum2.setData(11, 22);
    sum3 = addCoordinates(sum1, sum2);
    sum3.printCoordinates();
    return 0;
}
