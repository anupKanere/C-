#include <iostream>
#include <string>

using namespace std;

class Employee
{

    int id;
    string name;

public:
    inline int getId() const { return id; } // Used const for getter functions to indicate that they don't modify the object.
    inline void setId(int a) { id = a; }

    inline const string &getName() const { return name; }
    inline void setName(const string &n) { name = n; }
};

int main()
{
    Employee emp[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Employee id for emp no " << i + 1 << ": ";
        int empId;
        cin >> empId;
        emp[i].setId(empId);

        cout << "Enter Employee name for emp no " << i + 1 << " with empId " << emp[i].getId() << " : ";
        string empName;
        cin >> empName;
        emp[i].setName(empName);

        cout << "Employee Id   = " << emp[i].getId() << endl;
        cout << "Employee name = " << emp[i].getName() << endl;
    }

    return 0;
}
