#include <iostream>

int main() {
    
    const unsigned char LAST_CHAR = 127;

    // Използваме unsigned char защото char ще препълним
    // типа (overflow) и ще получим безкраен цикъл
    for (unsigned char ch = 0; ch <= LAST_CHAR; ch++)
        std::cout << ch << ' ';

    return 0;
}