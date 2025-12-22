#include <stdio.h>

int factorial(int n) {
  // Base condition
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
      // Recursive call
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
