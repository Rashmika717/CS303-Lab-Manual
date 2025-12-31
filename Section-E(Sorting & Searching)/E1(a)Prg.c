#include <stdio.h>

int array[5] = {9, 4, 7, 1, 5};
int n = 5;

void bubblesort()
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int swapped = 0;   // flag to check if swapping happened

        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;   // array already sorted
        }
    }
}

void print()
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    printf("Before Sorting Array Elements are\n");
    print();

    bubblesort();

    printf("After Sorting Array Elements are\n");
    print();

    return 0;
}
