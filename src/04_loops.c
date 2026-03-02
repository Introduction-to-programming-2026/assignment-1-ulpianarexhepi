#include <stdio.h>

/*
TASK 4: Loops
Goal: for + while + simple algorithms.

TODOs:
1) Ask the user for a positive integer n.
   - Keep asking until user enters n > 0 (use a loop).
2) Print numbers from 1 to n (for loop).
3) Compute and print:
   - sum from 1..n
4) Compute and print:
   - factorial of n (n!)
   Note: factorial grows fast; use unsigned long long.

Hints:
- Input loop can be while(n <= 0)
- Factorial:
  fact = 1;
  for(i=1; i<=n; i++) fact *= i;
*/

int main(void) {
    int n = 0;

    // TODO 1: keep asking until n > 0
    while (n <= 0) {
        printf("Enter a positive integer n (> 0): ");
        // TODO: scanf n
        // If scanf fails, clear input safely (optional for beginners)
        if (scanf("%d", &n) != 1)
        {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);{}
            n=0;

        }
    }

    printf("\n=== Counting ===\n");
    // TODO 2: print 1..n
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n=== Sum 1..n ===\n");
    // TODO 3: compute sum
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum is %d\n", sum);

    printf("\n=== Factorial n! ===\n");
    // TODO 4: compute factorial
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("%d! = %llu\n", n, fact);

    return 0;
}
