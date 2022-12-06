
#include <stdio.h>


 int main()
 {

        int n,sum=0,count=0;
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}


for (int  i = 0; i < n; i++)
{
   if (arr[i]%2 == 0)
   {
    sum++;
   }
else
   {
    count++;
   }
    
}
printf("count even is %d\n",sum);
printf("count odd is %d",count);
return 0;
}