
#include <stdio.h>


 int main()
 {

        int n,sum=0,m=0,s=0;
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}


for (int  i = 0; i < n; i++)
{
    
   if (m<arr[i])
   {
    m=arr[i];
   }
   
    
}
 for (int  i = 0; i < n; i++)
 {
     if(arr[i]!=m){
    if (s<arr[i])
    {
     s=arr[i];
  }
 }
 }

printf(" %d",s);

return 0;
}