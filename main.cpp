#include <iostream>

int firstFactorial (int num) {
    return num <= 1 ? 1 : num * firstFactorial(num - 1);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << firstFactorial(16) << std::endl;
    return 0;
}