#include <stdio.h>

int array[5] = {9, 4, 7, 1, 5};
int n = 5;

void SelectionSort()
{
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            temp = array[min];
            array[min] = array[i];
            array[i] = temp;
        }
    }
}

void print()
{
    int k;
    for (k = 0; k < n; k++)
    {
        printf("%d\n", array[k]);
    }
}

int main()
{
    printf("Before Sorting array elements are:\n");
    print();

    SelectionSort();

    printf("After sorting array elements are:\n");
    print();

    return 0;
}
