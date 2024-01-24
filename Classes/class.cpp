#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    int rollNo;
    int standard;
    string name;

public:
    string college;

    void setData(int, int, const string &);

    int getRollNo() const
    {
        return rollNo;
    }

    int getStandard() const
    {
        return standard;
    }

    const string &getName() const
    {
        return name;
    }
};

void printStudent(Student s);

int main()
{
    Student s1;
    s1.setData(10, 8, "Anup");
    s1.college = "KBP";

    Student s2;
    s2.setData(22, 12, "Akshay");
    s2.college = "VPS";

    printStudent(s1);
    printStudent(s2);

    return 0;
}

void Student ::setData(int a, int b, const string &studentName)
{
    rollNo = a;
    standard = b;
    name = studentName;
}

void printStudent(Student s)
{

    cout << "********PRINTING STUDENT DETAILS********" << endl;
    cout << "Roll No : " << s.getRollNo() << endl;
    cout << "Name    : " << s.getName() << endl;
    cout << "Standard: " << s.getStandard() << endl;
    cout << "College : " << s.college << endl;
    cout << endl;
}