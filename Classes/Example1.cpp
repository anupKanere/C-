#include <iostream>
#include <string>

using namespace std;

class Binary
{
    string str; // by default private member
    bool checkBinary();

public:
    void inputBinary();
    void onesCompliment();
    void displayBinary();
};

void Binary ::inputBinary()
{
    cout << "ENTER BINARY NUMBER : " << endl;
    cin >> str;
    cout << "Input taken!!!" << endl;
}
bool Binary ::checkBinary()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '1' && str.at(i) != '0')
        {
            cout << "NOT A BINARY NUMBER!! KINDLY RE-ENTER A BINARY NUMBER" << endl;
            return false;
        }
    }
    // cout << "VALID BINARY NUMBER " << endl;
    return true;
}
void Binary ::onesCompliment()
{
    if (checkBinary())
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str.at(i) == '0')
            {
                str.at(i) = '1';
            }
            else
            {
                str.at(i) = '0';
            }
        }
        cout << "after one's compliment binary : " << str << endl;
    }
}
void Binary ::displayBinary()
{
    cout << "You entered = "<<str<<endl;
}

int main()
{

    Binary bin;
    bin.inputBinary();
    bin.displayBinary();
    bin.onesCompliment();

    return 0;
}