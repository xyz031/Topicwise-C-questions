#include<stdio.h>

     int display(int arr[],int n,int i){
    
   if (i>=n)
   {
    return 0;
   }
     printf("%d\t",arr[i]);
     
     display(arr, n,i+1);
   

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

    display(arr,n,0);
    
}