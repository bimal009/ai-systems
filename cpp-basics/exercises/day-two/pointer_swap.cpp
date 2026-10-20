
#include <iostream>

void SwapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Before Swap: a = " << a
              << ", b = " << b << std::endl;

    SwapNumbers(&a, &b);

    std::cout << "After Swap: a = " << a
              << ", b = " << b << std::endl;

    return 0;
}
