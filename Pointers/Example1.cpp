#include <iostream>

using namespace std;

int main()
{

    int a = 5;
    int *ptr = &a;

    cout << "Address of a is " << &a << endl;
    cout << "Address of a is " << ptr << endl;
    cout << "Value at ptr is " << *ptr << endl;

    // Pointer to pointer
    int **ptr_ptr = &ptr;
    cout << "Address of ptr is " << &ptr << endl;
    cout << "Address of ptr is " << ptr_ptr << endl;
    cout << "Value at address of ptr2ptr " << *ptr_ptr<< endl;
    cout << "value at address value at(value at ptr2ptr) : " << **ptr_ptr << endl;
    return 0;
}