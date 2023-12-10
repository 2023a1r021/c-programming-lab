#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main()
{
    char inputString[100];

    // Input from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Check if the entered string is a palindrome
    if (isPalindrome(inputString))
    {
        printf("%s is a palindrome.\n", inputString);
    }
    else
    {
        printf("%s is not a palindrome.\n", inputString);
    }

    return 0;
}
