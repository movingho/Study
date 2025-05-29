#include <iostream>

int main()
{
    int user_input1;
    int user_input2;

    std::cout << "숫자 2개 입력: ";
    std::cin >> user_input1;
    std::cin >> user_input2;

    std::cout << "합은 " << user_input1 + user_input2 << "입니다." << std::endl;


    return 0;
}