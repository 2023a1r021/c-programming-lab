#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("enter the number you want factorial of\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        fact = fact * i;
    }
    printf("factorial of anumber is %d\n", fact);
    return 0;
}
