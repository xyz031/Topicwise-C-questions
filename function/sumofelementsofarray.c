#include<stdio.h>
  int sum=0;
     int display(int arr[],int n,int i){
    
   if (i>=n)
   {
    return 0;
   }
     sum=sum+arr[i];
     display(arr, n,i+1);
     return sum;
   

 }


int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    printf("%d",display(arr,n,0));
}