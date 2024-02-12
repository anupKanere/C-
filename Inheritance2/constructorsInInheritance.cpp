#include<iostream>

using namespace std;

class Base1{
    int data1;
    public :
        // Base1(int a){
        //     data1 = a;
        //     cout<< "Base class 1 constructor called "<< endl;
        // }
        // Constructor Initialization list
        Base1(int a ) : data1(a){
            cout<< "Base class 1 constructor called "<< endl;
        }
        void showBase1Data(){
            cout<<"The value of Data-1 is " <<data1<<endl;
                
        }
};
class Base2{
    int data2;
    public :
        Base2(int a){
            data2 = a;
            cout<< "Base class 2 constructor called "<< endl;
        }
        void showBase2Data(){
            cout<<"The value of Data-2 is " <<data2<<endl;
                
        }
};

class Derived : public Base1 , public Base2 {
    int der1 , der2;
    public :
        Derived(int a, int b , int c , int d):Base1(a) , Base2(b){
            der1 = c;
            der2 = d;
            cout<< "Derived class  constructor called "<< endl;
        }
        void showDerivedData(){
            cout<<"The value of Der-1 is " <<der1<<endl;
            cout<<"The value of Der-2 is " <<der2<<endl;
            
        }
};

int main(){
    Derived der(1,2,3,4);
    der.showBase1Data();
    der.showBase2Data();
    der.showDerivedData();


    return 0;
}