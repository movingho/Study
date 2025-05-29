#include <iostream>

int main()
{
    int odd_sum = 0;

    for(int i=1;i<=100;i++)
    {
        if(i%2 == 0)
        {
            odd_sum += i;
        }
    }

    std::cout << "1부터 100까지 짝수의 합: " << odd_sum << std::endl;

    return 0;
}