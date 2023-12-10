#include <stdio.h>

// Function to perform matrix multiplication
void multiplyMatrices(int firstMatrix[][3], int secondMatrix[][3], int result[][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result[i][j] = 0;

            for (int k = 0; k < 3; ++k)
            {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    // Example Usage
    int firstMatrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondMatrix[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultMatrix[3][3];

    // Perform matrix multiplication
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix);

    // Print the matrices
    printf("First Matrix:\n");
    printMatrix(firstMatrix);

    printf("\nSecond Matrix:\n");
    printMatrix(secondMatrix);

    printf("\nResult Matrix:\n");
    printMatrix(resultMatrix);

    return 0;
}
