#include <iostream>

void change(int x) {
    x = 100;
}

int main() {
    int a = 10;
    change(a);
    std::cout << a << std::endl; // 👉 출력: 10 (안 바뀜)
}
