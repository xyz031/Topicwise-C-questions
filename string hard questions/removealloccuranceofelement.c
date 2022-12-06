#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, count = 0, len;
    char str[50], key,t = 1;

    printf("enter the string\n");
    scanf(" %s", str);
    printf("enter character to be removed\n");
    scanf(" %c", &key);
    len = strlen(str)
    



    for (int i = 0,j=0; i < len; i++)
    {
       
          if (str[i]!=key)
          {
            str[j]=str[i];
            j++;
          } 
        
    }
    str[j]='\0';
    printf("%s", str);

    return 0;
}
