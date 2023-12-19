//assignment : 08
//14. Write a C program to find sum of all even or odd numbers in given range using recursion.

#include <stdio.h>


int sumOfEvenOdd(int start, int end);


int main()
{
    int start, end, sum;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Sum of even/odd numbers between %d to %d = %d\n", start, end, sumOfEvenOdd(start, end));
    
    return 0;
}


int sumOfEvenOdd(int start, int end) 
{
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}
