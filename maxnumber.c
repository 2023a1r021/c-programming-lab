#include <stdio.h>
int main()
{
    int n, i, max = 1, num;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the  value\n");
        scanf("%d", &num);
        max = (num > max) ? num : max;
    }
    printf("%d is max no. along all numbers\n,max");
    return 0;
}
