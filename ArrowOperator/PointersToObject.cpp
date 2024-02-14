#include<iostream>

using namespace std;

class Employee{
    int empId;
    int deptId;
        public:
        void setData(int a , int b){
            empId = a;
            deptId = b;
        }
        void getData(){
            cout<<"Employee id is   : "<<empId<<endl;
            cout<<"Department id is : "<<deptId<<endl;
        }

};

int main(){
    Employee *ptr = new Employee;
    // (*ptr).setData(1,2);
    // (*ptr).getData();
    //above 2 lines can be also written as

    ptr->setData(99,88);
    ptr->getData();

    Employee *ptr1 =  new Employee[3];// we can also create array of objects using pointers;

    ptr1->setData(1,1);
    ptr1->getData();

    (ptr1 + 1)->setData(2,2);
    (ptr1 + 1)->getData();

    (ptr1 + 2)->setData(3,3);
    (ptr1 + 2)->getData();
    return 0;
}