#include<iostream>
#include <string>

using namespace std;

class Shop{
    int shopId;
    string shopName;
    public:
        void setData(int a, string b){
            shopId = a;
            shopName = b;
        }
        void getData(){
            cout<<"Shop id is   : "<<shopId<<endl;
            cout<<"Shop name is : "<<shopName<<endl;
        }
};

int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *firstAddress = ptr;
    int price;
    string name;
    // for (int i = 0; i < size ; i++)
    // {
    //     cout << "Enter Shop Id and Shop Name "<<endl;
    //     cin >> price >> name; 
    //     ptr->setData(price, name);
    //     ptr++;
    // }
    for (int i = 0; i < size; i++) {
        cout << "Enter Shop Id and Shop Name " << endl;
        cin >> price; 
        cin.ignore(); // Ignore the newline character left in the input buffer
        getline(cin, name); // Input shop name with spaces
        ptr->setData(price, name);
        ptr++;
    }

    for (int i = 0; i < size ; i++)
    {
        firstAddress->getData();
        firstAddress++;
    }
    delete[] firstAddress; 

    return 0;
}