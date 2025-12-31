#include <stdio.h>
#include <string.h>

// Function to perform binary search on an array of strings
int binarySearchStrings(char *arr[], int size, char *key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;   // Calculate mid
        int cmp = strcmp(arr[mid], key);    // Compare strings

        if (cmp == 0)
        {
            return mid;                     // Key found
        }
        else if (cmp < 0)
        {
            low = mid + 1;                  // Search right half
        }
        else
        {
            high = mid - 1;                 // Search left half
        }
    }
    return -1;                              // Key not found
}

int main()
{
    // Array must be sorted
    char *fruits[] = {"apple", "banana", "grape", "kiwi", "mango", "orange", "pineapple"};
    int num_fruits = sizeof(fruits) / sizeof(fruits[0]);

    char *search_key1 = "mango";
    char *search_key2 = "grape";
    char *search_key3 = "pear";

    int result1 = binarySearchStrings(fruits, num_fruits, search_key1);
    if (result1 != -1)
    {
        printf("\"%s\" found at index %d.\n", search_key1, result1);
    }
    else
    {
        printf("\"%s\" not found in the list.\n", search_key1);
    }

    int result2 = binarySearchStrings(fruits, num_fruits, search_key2);
    if (result2 != -1)
    {
        printf("\"%s\" found at index %d.\n", search_key2, result2);
    }
    else
    {
        printf("\"%s\" not found in the list.\n", search_key2);
    }

    int result3 = binarySearchStrings(fruits, num_fruits, search_key3);
    if (result3 != -1)
    {
        printf("\"%s\" found at index %d.\n", search_key3, result3);
    }
    else
    {
        printf("\"%s\" not found in the list.\n", search_key3);
    }

    return 0;
}
