#include <iostream>
#include "utils.cpp"

int addition(int a, int b);
int subtraction(int a, int b);
int multiply(int a, int b);

int main() {
    int a = 4;
    int b = 9;
    std::cout << "Sum: " << addition(a, b) << std::endl;
    std::cout << "Subtraction: " << subtraction(a, b) << std::endl;
    std::cout << "Multiply: " << multiply(a, b) << std::endl;

    std::cout << "End" << std::endl;
    return 0;
}
