#include <iostream>
/*
Class example with Array, static variable(class level variables) and static Functions;
*/
using namespace std;

class Shop 
{
    static int shopCounter; // creating static data member
    int itemID[100];
    float price[100];
    int counter = 0;

public:
    Shop(); // declaring constructor
    void setData();
    void displayData();
    static void getShopNo(); // static function : this can access only static data members
};

int Shop::shopCounter = 0; // Initializing static data member
void Shop ::getShopNo()
{
    cout << "SHOP NO = " << shopCounter << endl;
    // cout<<price[1];//inside static func we cannot access non-static member, we will get error
}

// Constructor
Shop::Shop()
{
    shopCounter++;
}

void Shop ::setData()
{
    cout << "Enter the Item id for item no " << counter + 1 << " at Shop no : " << shopCounter << endl;
    cin >> itemID[counter];
    cout << "Enter the Item Price for item no " << counter + 1 << endl;
    cin >> price[counter];
    counter++;
}

void Shop ::displayData()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "*************SHOWING ITEM DETAILS FOR SHOP NO " << shopCounter << " *************" << endl;
        cout << "Item id for item no " << i + 1 << "    = " << itemID[i] << endl;
        cout << "Item price for item no " << i + 1 << " = " << price[i] << endl;
    }
}

int main()
{
    Shop reliance;
    reliance.setData();
    // reliance.setData();
    reliance.displayData();
    reliance.getShopNo();

    Shop dmart;
    dmart.setData();
    // dmart.setData();
    dmart.displayData();
    dmart.getShopNo();

    return 0;
}
