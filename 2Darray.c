#include <stdio.h>
int main()
{
    int rows, cols;
    printf("enter the number of rows :");
    scanf("%d", &rows);
    printf("enter the number of columns :");
    scanf("%d", &cols);
    int arrays[rows][cols];
    printf("enter the elements of array :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter element at postion (% d, % d) : ", i + 1, j + 1);
            scanf("%d", &arrays[i][j]);
        }
    }
    printf("element of array are:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arrays[i][j]);
        }
    }
    printf("\n");
    return 0;
}
