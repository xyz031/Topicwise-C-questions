
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

    
    for (int i = 0; i < n; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;
            printf("%c",a[i]);
        }
        else{
            a[i]+=32;
            printf("%c",a[i]);
        }
        
    }


    

}