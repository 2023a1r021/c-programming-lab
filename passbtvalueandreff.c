#include <stdio.h>

// Function to swap two numbers by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}

// Function to swap two numbers by reference using pointers
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: a = %d, b = %d\n", *a, *b);
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Pass by value
    swapByValue(num1, num2);
    printf("After swapByValue function: num1 = %d, num2 = %d\n", num1, num2);

    // Pass by reference using pointers
    swapByReference(&num1, &num2);
    printf("After swapByReference function: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
