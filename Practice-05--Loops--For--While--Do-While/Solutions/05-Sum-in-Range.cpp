#include <iostream>

int main() {

    long long num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        long long temp = num1;
        num1 = num2;
        num2 = temp;
    }

    /// Това е много бавно за по-големи числа!
    // long long sum = 0;
    // for (int i = num1; i <= num2; i++)
    //     sum += i;

    /// Когато можем - използваме математика!
    // Формула за сума на аритметична прогресия
    long long sum = (num1 + num2) * (num2 - num1 + 1) / 2;

    // При делението не е 2.0, а само 2 защото
    // знаем че сумираме само цели числа
    // => сумата ще бъде цяло число

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
