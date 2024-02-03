#include <iostream>
#include "employee.h"
#include "developer.h"

using namespace std;

int main()
{

    Developer dev(123, "Java");
    dev.publicId = 8888; // setting derived class fields which inherits from base class
    dev.name = "dev ak"; // setting derived class fields which inherits from base class
    dev.printData();

    return 0;
}