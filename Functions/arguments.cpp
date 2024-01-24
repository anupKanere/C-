#include <iostream>

using namespace std;

float calculateIntrest(int amount, float roi = 6.0f) // float roi = 6.0 is default argument
{
    return amount + (amount * roi) / 100.0;
}

// Function with constant arguments
void displayValue(const int x)
{
    // x = 10; // Error: Cannot modify a constant parameter
    cout << "\n Value: " << x ;
}

int main()
{
    int amount = 100;
    cout << "Your amount " << amount << " has be changed to " << calculateIntrest(amount) << " after adding intrest of 1 year ";
    cout << "\n Your amount " << amount << " has be changed to " << calculateIntrest(amount, 10) << "after adding intrest of 1 year ";

    
    // Calling the function with a constant argument
    int number = 42;
    displayValue(number);
    return 0;
}

/*
Default Arguments:
Default arguments allow you to provide default values for function parameters.
If a caller does not specify a value for a parameter with a default argument, the default value is used.

Constant Arguments:
Constant arguments indicate that the function should not modify the value of
the corresponding parameter. This is achieved by using the const qualifier
*/