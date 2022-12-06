

#include <stdio.h>
#include <string.h>

int main()
{

    int i, j, count = 0, len;
    char str[50], key,t = 1;

    printf("enter the string\n");
    scanf(" %s", &str);
    printf("enter character to be searched\n");
    scanf(" %c", &key);
    len = strlen(str);


for(i=0;str[i];i++);
	 len=i; 

    for (int i = (len-1); i >=0; i--)
    {
      
        if (t == 1)
        {

            if ( key ==str[i])
           {
                t = 0;
                str[i] = str[i - 1];
                
            }
        }
            else
        {
            

                str[i] = str[i - 1]
                
        }   
        
        

        
    }


    for (int i = 0; i < len; i++)
    {
        /* code */
        printf("%c",str[i]);
    }
    

    return 0;
}