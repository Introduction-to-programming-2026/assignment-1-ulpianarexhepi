#include <stdio.h>

/*
TASK 2: Operators
Goal: Use arithmetic + comparison + logical operators.

TODOs:
1) Ask the user for two integers a and b.
2) Print:
   - a + b, a - b, a * b
   - a / b (integer division) AND a % b (remainder)
     - If b == 0, do not divide (print a warning).
3) Compare a and b and print:
   - "a is greater", "b is greater", or "they are equal"
4) Logical checks:
   - Print if BOTH numbers are positive
   - Print if AT LEAST ONE number is negative

Hints:
- Comparisons: > < == !=
- Logical: && || !
*/

int main(void) {
    int a = 0, b = 0;

    printf("Enter integer a: ");
    // TODO: scanf a
   scanf("%d", &a);
    printf("Enter integer b: ");
    // TODO: scanf b
   scanf("%d", &b);

    printf("\n=== Arithmetic ===\n");
    // TODO: print +, -, *
    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);

    // TODO: division + modulo only if b != 0
    // else print "Cannot divide by zero."
    if (b != 0)
    {
        printf("a / b = %d\n", a/b);
        printf("a %% b = %d\n", a%b);
    } else
    {
        printf("cannot devide by 0.\n");
    }

    printf("\n=== Comparison ===\n");
    // TODO: compare and print
    if (a>b)
    {
        printf("a > b\n");
    }else if (b>a)
    {
        printf("b > a\n");
    }else
    {
        printf("a = b\n");
    }

    printf("\n=== Logical checks ===\n");
    // TODO: both positive?
    // TODO: at least one negative?
    if (a>0 && b<0)
    {
        printf(" Numbers are positive. \n");
    }
    if (a<0 || b<0)
    {
        printf(" at least one number are negative. \n");
    }

    return 0;
}
