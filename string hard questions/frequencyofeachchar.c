

#include <stdio.h>
#include <string.h>
 
int main()
{

    int i, count = 0, t=1, pos2;
    char str[50], key, a[10];
 
    printf("enter the string\n");
    scanf(" %s", &str);
   
 
 
 for (int i = 0; str[i] !='\0' ; i++)
 {
    for (int j = 0; str[j]!='\0' ; j++)
    {
        if (str[i]==str[j])
        {
            
           count++;
           
        }
        
    }
    
    printf("frequency of %c is %d\n",str[i],count);
        count=0;
    }
 
 
        
 
 
 
    return 0;
}