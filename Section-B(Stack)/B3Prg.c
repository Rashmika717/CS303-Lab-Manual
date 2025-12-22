#include <stdio.h>

void towerOfHanoi(int n, char start, char other, char end)
{
    // Base case
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", start, end);
        return;
    }

    // Move n-1 disks from start to other
    towerOfHanoi(n - 1, start, end, other);

    // Move the nth disk from start to end
    printf("Move disk %d from %c to %c\n", n, start, end);

    // Move n-1 disks from other to end
    towerOfHanoi(n - 1, other, start, end);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
