#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, i, n;
    printf("enter no of iterations\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", num1);
        int sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return 0;
}
