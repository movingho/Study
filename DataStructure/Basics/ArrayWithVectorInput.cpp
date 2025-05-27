#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size of Array : ";
    cin >> n;

    int* arr = new int[n];  // 동적 메모리 할당
    for (int i = 0; i < n; ++i) {
        cout << i << "번째 배열의 값 입력 : " << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;  // 반드시 메모리 해제
    return 0;
}
