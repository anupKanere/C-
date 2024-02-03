#ifndef developer_h
#define developer_h
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

// Derived class
class Developer : public Employee
{
private:
    int devId;

public:
    string technology;
    Developer(){};
    Developer(int, string);
    ~Developer(){};
    void printData();
};
#endif
/*
Notes : 
    - Default visibility mode for derived class is private
    - Public visibility mode : public members of base class becomes public members of derived class
    - Private visibility mode : public members of base class becomes private members of derived class
    - Private members are never inherited 

Syntax for Derived class :
    class {Derived_class_name} : {visibility_mode} {base_class_name}
*/