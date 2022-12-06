
#include <stdio.h>
#include <string.h>

int check_vowel(char);

void main()
{
    int c = 0, n, x, len, i, j;
    printf("enter no of charecters in s1");
    scanf("%d", &n);
    
    char a[n];

    scanf("%s", &a);

    
    for (int i = 0; i < n/2; i++)
    {
        x=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=x;
        
    }


    printf("%s",a);

}