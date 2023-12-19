//assignment : 08
//13. Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include <stdio.h>

int recSum(int n)
{
    if (n <= 1)
        return n;

    return n + recSum(n - 1);
}

int main()
{
    int n = 10;
    printf("Sum = %d ", recSum(n));
    return 0;
}
