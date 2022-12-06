
#include <stdio.h>


 int main()
 {

        int n,sum=0;
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}


for (int  i = 0; i < n; i++)
{
   sum=sum+arr[i];
    
}
printf("sum is %d",sum);

return 0;
}