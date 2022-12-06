#include <stdio.h>
#include <math.h>
int perfect(int n);
int main()
{
    int n;
    printf("enter the no\n");
    scanf("%d", &n);
    perfect(n);
}

int perfect(int n)
{
    int sum = 0, count = 0, d, j = 0;

    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("the no is a prime no\n");
    }
    else
    {
        printf("no is not a prime no\n");
    }

    for (int i = n; i != 0; i = i / 10)
    {

        j++;
    }

    for (int i = n; i != 0; i = i / 10)
    {
        d = i % 10;
        suma = suma + pow(d, j);
    }

    if (suma == n)
    {
        printf("the no is a armstrong no\n");
    }
    else
    {
        printf("no is not a armstrong no\n");
    }

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("no is a perfect no\n");
    }
    else
    {
        printf("no is not a perfect no\n");
    }
}
