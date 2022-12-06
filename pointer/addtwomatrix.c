#include <stdio.h>
int main()
{
    int b[2][2] = {1, 2, 3, 4},a[2][2]={1,2,3,4},
     n, x, i;
    
    
int *ptr=a[0],*ptr2=b[0];
 
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("%d ",(*(*(a+i)+j))+(*(*(b+i)+j)));
    }
 printf("\n");   
}



return 0;
}
