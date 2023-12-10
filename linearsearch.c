#include <stdio.h>

// Function to perform linear search in an array
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main()
{
    // Example Usage
    int arr[] = {5, 2, 9, 7, 3, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int result = linearSearch(arr, size, key);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", key, result);
    }
    else
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
