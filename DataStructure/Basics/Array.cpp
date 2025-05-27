#include<iostream>

using namespace std;

int main()
{
    int A[5] ={2, 4, 6, 8, 10}; // 배열 초기화
    int B[] = {1, 2, 3, 4, 5};  // 크기 생략
    int C[10] = {1, 2, 3, 4, 5, 6, 7};

    for(int i=0; i<10; i++)
    {
        cout << A[i] << endl;   // i>5 일 때, 쓰레기 값이 출력됨
    } 
    
    cout << string(30, '-') << endl;

    for (int x:A)   // 범위 기반 for문
    {
        cout << x << endl;
    }

    cout << string(30, '-') << endl;

    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << C[8] << endl;   // 크기가 설정된 배열의 나머지는 0

    return 0;
}

