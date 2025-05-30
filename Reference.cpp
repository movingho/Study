#include <iostream>

int main()
{
    int a = 3;
    int& another_a = a; // 참조자. another_a 는 a의 또다른 이름이라고 컴파일러에게 명시
                        // 따라서 another_a에게 수행한 작업은 a에게 하는 것과 동일
    std::cout << "a : " << a << std::endl;
    another_a = 5;
    std::cout << "a : " << a << std::endl;
    std::cout << "another_a : " << another_a << std::endl;

    return 0;
}