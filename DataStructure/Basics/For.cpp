#include <iostream>

int main()
{
    int i, sum;
    for(i=1;i<=10;i++)
    {
        sum += i;
    }

    std::cout << "합은 : " << sum << std::endl;
}