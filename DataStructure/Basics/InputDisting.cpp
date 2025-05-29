#include <iostream>

using namespace std;

int main()
{
    int input_value;

    cout << "정수를 입력하세요 : ";
    cin >> input_value;

    if(input_value % 2 == 0)
    {
        cout << "짝수입니다" << endl;
    }
    else
    {
        cout << "홀수입니다" << endl;
    }


    return 0;
}