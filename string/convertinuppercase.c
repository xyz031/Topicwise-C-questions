
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i;
 
    printf("Enter  the string in lower case: ");
    gets(s);
    
    printf("string in lowercase ='%s'\n",s);
 
 
     
    for(i=0;s[i];i++)  
    {
        if(s[i]>=97 && s[i]<=122)
         s[i]-=32;
 	}
 	
     
    printf("string in uppercase ='%s'\n",s);
 
 
    
 
 
    return 0;
}