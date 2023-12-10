#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50], temp[50];

    // input string
    printf("enter the string:");
    scanf("%s", str1);
    printf("enter the second string:");
    scanf("%s", &str2);

    // string length
    printf("\n 1. string length:\n");
    printf("length of string 1: %lu\n", strlen(str1));
    printf("length of strinfg 2: % lu\n", strlen(str2));

    // string copy
    printf("\n2. string copy:\n");
    strcpy(temp, str1);
    printf("copied string from str1 to temp: %s\n", temp);

    // string concatenation
    printf("\n3. string concatenation:\n");
    strcat(temp, str2);
    printf("concatenation string: %s\n", temp);

    // string comparison
    printf("\n4. string comparion:\n");
    if (strcmp(str1, str2) == 0)
        printf("string 1 and string 2 are equal");
    else
        printf("string 1 and string2 are not equal");

    // string searching
    printf("\n5. string searching:\n");
    char substring[20];
    printf("enter a substring to search:");
    scanf("%s", substring);
    if (strstr(str1, substring) != NULL)
        printf("%s,is present in %s\n", substring, str1);
    else
        printf("%s is not present in %s\n", substring, str1);
    return 0;
}
