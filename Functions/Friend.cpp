#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    friend void add(X, Y);
    void setData(int val) { data = val; }
};

class Y
{
    int num;

public:
    friend void add(X, Y);
    void setData(int val) { num = val; }
};

void add(X a, Y b)
{
    cout << " Addition of X and Y objects variable is : " << a.data + b.num << endl;
}

int main()
{
    X x;
    Y y;
    x.setData(10);
    y.setData(20);
    add(x,y);

    return 0;
}