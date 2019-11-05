#include <iostream>

int main() {

    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // If the first number is number is larger
    // than the second number we swap them.
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // Starting from num1 print num1 and then increment it.
    // Repeat until num1 becomes larger than num2.
    while (num1 <= num2)
        std::cout << num1++ << ' ';

    return 0;
}
