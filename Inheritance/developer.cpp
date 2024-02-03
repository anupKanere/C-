#include "developer.h"

Developer ::Developer(int id, string techName)
{
    devId = id;
    technology = techName;
}

void Developer ::printData()
{
    cout << "Developer id " << devId << " using " << technology << " technology" << endl;
    cout << "Public Emp id " << publicId << " name : " << name << endl;
    // cout<< "private member "<<privateId; // this line will throw error because derived class cannot inherit private members of base class
}