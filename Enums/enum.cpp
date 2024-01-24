#include <iostream>

using namespace std;

int main()
{
    enum Color
    {
        RED,    // 0
        ORANGE, // 1
        BLACK,  // 2
        WHITE   // 3
    };

    Color c1;
    int color;
    cout << "ENTER YOUR COLOR NUMBER FROM BELOW OPTIONS: \n";
    cout << "0 for RED \n";
    cout << "1 for ORANGE \n";
    cout << "2 for BLACK \n";
    cout << "3 for WHITE \n";

    cin >> color;
    c1 = (Color)color;

    switch (c1)
    {
    case 0:
        cout << "You Select Black ";
        break;
    case 1:
        cout << "You Select ORANGE ";
        break;
    case 2:
        cout << "You Select BLACK ";
        break;
    case 3:
        cout << "You Select WHITE ";
        break;

    default:
        cout << "Please choose correct option";
        break;
    }

    return 0;
}
