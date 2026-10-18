#include "log.h"

int Multiply(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int result = Multiply(a, b);
    Log(result);
}

int main() {
    InitLog();
    MultiplyAndLog(4, 6);
    MultiplyAndLog(7, 12);
    MultiplyAndLog(9, 45);
}