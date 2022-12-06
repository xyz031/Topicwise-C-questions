
#include <stdio.h>
#include <string.h>

int check_vowel(char);

void main()
{
    int c = 0, n, x, len, i, j;
    printf("enter no of s1 and s2");
    scanf("%d", &n);
    scanf("%d", &x);
    char a[n], b[x];

    scanf("%s%s", &a, &b);

    len = strlen(a);

    if (n == x)
    {
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (a[i] == b[j])
                {
                    c++;
                }
            }

        }
            if (c == n)
            {
                printf("string is anagram");
            }
            else
            {
                printf("string is not anagram");
            }
    }
    else
    {
        printf("not a amagram");
    }
}