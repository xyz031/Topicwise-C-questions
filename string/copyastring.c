
#include <stdio.h>
#include <string.h>

int check_vowel(char);

void main()
{
    int c = 0, n, x, len, i, j;
    printf("enter no of charecters in s1");
    scanf("%d", &n);
    
    char a[n], b[100];

    scanf("%s", &a);

    
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    
printf("s2 is %s",b);
}