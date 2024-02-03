#ifndef employee_h
#define employee_h
#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee
{
private:
    int privateId;

public:
    int publicId;
    string name;
    Employee();
    Employee(int, int, string);
    ~Employee(){};
    void printData();
};

#endif