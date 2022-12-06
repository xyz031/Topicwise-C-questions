    #include <stdio.h>
int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    do
    {
        if (a % 2 == 0)
        {
            sum = sum + a;
        }

       
        a--;

    } while (a > 0);
     printf("%d", sum);
}
