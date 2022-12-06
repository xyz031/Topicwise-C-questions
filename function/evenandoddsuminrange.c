#include <stdio.h>


int sumOfEvenOdd(int start, int end);


int main()
{
    int start, end, sum;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    
    printf("Sum of even/odd numbers between %d to %d = %d\n", start, end, sumOfEvenOdd(start, end));
    
    return 0;
}



/**
 * Find sum of all even or odd numbers recursively.
 */
int sumOfEvenOdd(int start, int end) 
{
    /* Base condition */
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}