

#include <stdio.h>
#include <string.h>
 
int main()
{

    int i, count = 0, pos1, pos2;
    char str[50], key, a[10];
 
    printf("enter the string\n");
    scanf(" %s", &str);
    printf("enter character to be searched\n");
    scanf(" %c", &key);
 
 printf("enter the charecter\n");
 for (int i = 0; str[i] !='\0' ; i++)
 {
    if (str[i]==key)
    {
        count++;
    }
    
 }
        printf("%d",(count));
 
 
 
    return 0;
}