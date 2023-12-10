#include <stdio.h>

void findMaxElementAndIndex(int arr[], int size)
{
    if (size <= 0)
    {
        printf("Array is empty\n");
        return;
    }

    int maxElement = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    printf("The maximum element is %d at index %d\n", maxElement, maxIndex);
}

int main()
{
    // Example Usage
    int arr[] = {5, 2, 9, 7, 3, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findMaxElementAndIndex(arr, size);

    return 0;
}
