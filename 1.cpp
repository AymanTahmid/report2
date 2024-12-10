#include <iostream>
#include "helper.h"

int main() {
    int a, b;
    char op;

    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "Result: " << add(a, b) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << subtract(a, b) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << multiply(a, b) << std::endl;
            break;
        case '/':
            std::cout << "Result: " << divide(a, b) << std::endl;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
    }

    return 0;
}
