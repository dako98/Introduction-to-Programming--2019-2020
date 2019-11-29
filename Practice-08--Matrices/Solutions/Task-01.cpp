#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

void FillMatrix(int arr[][MAX_COLS], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            std::cin >> arr[row][col];
        }
    }
}

void PrintFormatted(const int arr[][MAX_COLS], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            std::cout << arr[row][col] << '\t';
        }
        std::cout << '\n';
    }
}

int main()
{
    int arr[MAX_ROWS][MAX_COLS];
    int rows, cols;

    std::cin >> rows >> cols;

    FillMatrix(arr, rows, cols);

    std::cout << '\n';

    PrintFormatted(arr, rows, cols);

    return 0;
}
