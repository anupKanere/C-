#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Hello, World! \n";
    int a, b;
    cout << "Enter value of a : ";
    cin >> a;

    cout << "Enter value of b : ";
    cin >> b ;

    cout << "Sum = " << a + b <<endl;

    int c = 11, d = 22;

    //using setw();
    cout << "Without setw c = " << c << endl; 
    cout << "Without setw c = " << c << endl;     
    cout << "With setw c    = " << setw(4) << c << endl;       
    cout << "With setw c    = " << setw(4) << c << endl;
        

    return 0;
}