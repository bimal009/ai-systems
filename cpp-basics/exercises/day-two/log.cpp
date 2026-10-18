#include <iostream>
#include "log.h"

void InitLog() {
    Log("Initialized");
}

void Log(const char* message) {
    std::cout << message << std::endl;
}

void Log(int value) {
    std::cout << value << std::endl;
}