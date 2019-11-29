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

int FindSecondDiagProd(const int arr[][MAX_COLS], int rows, int cols)
{
    int product = 1;

    for (int row = 0; row < rows; row++)
    {
        product *= arr[row][cols - row - 1];
    }
    return product;
}

int main()
{
    int arr[MAX_ROWS][MAX_COLS];
    int rows, cols;

    std::cin >> rows >> cols;

    FillMatrix(arr, rows, cols);

    std::cout << FindSecondDiagProd(arr, rows, cols);

    return 0;
}
