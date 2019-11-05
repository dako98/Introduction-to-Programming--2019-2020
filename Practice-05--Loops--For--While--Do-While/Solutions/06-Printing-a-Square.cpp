#include <iostream>

int main() {

    const char SYMBOL = '#';

    int length;
    std::cin >> length;

    // Валидация на входа
    if (length < 2) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    // Извеждаме първия ред от "квадрата"
    for (int i = 0; i < length; i++)
        std::cout << SYMBOL;

    // Отиваме на нов ред
    std::cout << std::endl;

    // Извеждаме средните редове от квадрата (N-2 на брой реда)
    for (int row = 0; row < length - 2; row++) {
        // Всеки ред започва със един символ
        std::cout << SYMBOL;

        // N-2 на брой празни пространства (space-а)
        for (int i = 0; i < length - 2; i++) {
            std::cout << ' ';
        }

        // И завършва с още един символ и нов ред
        std::cout << SYMBOL << std::endl;
    }

    // Извеждаме последния ред от "квадрата"
    for (int i = 0; i < length; i++)
        std::cout << SYMBOL;

    // Извеждаме нов ред
    std::cout << std::endl;

    return 0;
}
