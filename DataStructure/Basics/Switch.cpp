#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int input_value;
    cout << "숫자 1~3 입력: ";
    cin >> input_value;

    switch (input_value)
    {
    case 1:
        cout << "Red";
        break;   
    case 2:
        cout << "Green";
        break;
    case 3:
        cout << "Blue";
        break;
    default:
        cout << "Invalid";
        break;
    }

    return 0;
}