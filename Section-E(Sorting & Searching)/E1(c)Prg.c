#include <stdio.h>

int array[5] = {9, 4, 7, 1, 5};
int n = 5;

void insertionSort()
{
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    printf("Before Sorting Array Elements are\n");
    print();

    insertionSort();

    printf("After Sorting Array Elements are\n");
    print();

    return 0;
}
