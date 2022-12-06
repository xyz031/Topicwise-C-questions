
#include <stdio.h>
#include <string.h>


int check_vowel(char);

void main()
{
     int n;
     scanf("%d",&n);
   char a[n];
    char copy[n];
    for (int i = 0; i <n ; i++)
    {
     scanf("%s",&a[i]);

  }
strcpy(copy,a);
   strrev(a);
   

if (strcmp(a,copy)==0)
{
    printf("string is palindrome");
}
else
{
    printf("not a palindrome");
}




}