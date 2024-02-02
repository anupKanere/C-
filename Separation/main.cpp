#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{

    Calculator cal;

    cout << "Addition = " << cal.add(10, 20) << endl;
    cout << "Substraction = " << cal.sub(20, 10) << endl;
    cout << "Multiplication = " << cal.mul(10, 20) << endl;
    cout << "Division = " << cal.div(10, 20) << endl;

    return 0;
}