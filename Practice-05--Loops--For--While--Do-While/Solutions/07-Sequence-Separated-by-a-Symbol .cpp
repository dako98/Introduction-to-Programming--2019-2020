#include <iostream>

int main() {
    
    int bufferNum, minNum, maxNum;
    int sum = 0, counter = 0;   // Начални стойности
    char bufferChar;

    do {
        // Четем число и символ
        std::cin >> bufferNum;
        std::cin >> bufferChar;

        // Валидираме входа
        if (bufferChar != ',' && bufferChar != ';') {
            std::cout << "Invalid input" << std::endl;
            return 1;
        }

        // Добавяме към текущата сума
        // числото, което сме прочели
        sum += bufferNum;

        // Ако четем първото число
        if (counter == 0) 
        {
            // Записваме първото число като min и max
            minNum = bufferNum;
            maxNum = bufferNum;
        }
        else // Ако НЕ четем първото число
        {
            // Ако числото е по-малко от текущия min
            // записваме текущото число като min
            if (bufferNum < minNum)
                minNum = bufferNum;

            // Ако числото е по-голямо от текущия min
            // записваме текущото число като min
            if (bufferNum > maxNum)
                maxNum = bufferNum;
        }

        // Инкрементираме брояча
        counter++;

    } while (bufferChar != ';'); // Циклим до ';'

    // След като сме прочели цялата поредица
    // изчисляваме средно аритметичното
    double average = sum / (double)counter;

    // И извеждаме резултатите
    std::cout << "Min is " << minNum << std::endl;
    std::cout << "Max is " << maxNum << std::endl;
    std::cout << "Average is " << average << std::endl;


    return 0;
}