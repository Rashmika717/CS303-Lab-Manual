#include <stdio.h>

int array[5] = {9, 4, 7, 1, 5};
int n = 5;

/* Swap function */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Partition function */
int partition(int low, int high)
{
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);
    return i + 1;
}

/* Quick Sort function */
void quicksort(int low, int high)
{
    if (low < high)
    {
        int pi = partition(low, high);
        quicksort(low, pi - 1);
        quicksort(pi + 1, high);
    }
}

/* Print array */
void printArray()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/* Main function */
int main()
{
    printf("Before Sorting:\n");
    printArray();

    quicksort(0, n - 1);

    printf("After Sorting:\n");
    printArray();

    return 0;
}
