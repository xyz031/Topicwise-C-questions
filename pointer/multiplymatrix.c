#include <stdio.h>
int main()
{
    int b[2][2] = {1, 2, 3, 4},a[2][2]={1,2,3,4},
     n, x, i,sum=0,res[2][2];
    
    
int *ptr=a[0],*ptr2=b[0];
 
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {   for (int k = 0; k < 2; k++)
    {
        
        sum=sum+("%d ",(*(*(a+i)+k))*(*(*(b+k)+j)));
    }
    *(*(res+i)+j)=sum;
    sum=0;
    }
  
}


 
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
   {
    printf("%d ",*(*(res+i)+j));
    }
  printf("\n");
}




return 0;
}
