#include<stdio.h>
int read(int arr[],int n,int i);
int print(int arr[],int n,int i);
int main()
{
int n,i=0;
scanf("%d",&n);
int arr[n];
read(arr,n,i);

 print(arr,n,i);
  return 0;
}

int read(int arr[],int n,int i)

{
if (i<n)
{
    scanf("%d",&arr[i]);

 read( arr, n,i+1);
}


}


int print(int arr[],int n,int i)
{
  if (i<n)
{
    

   printf("%d",arr[i]);

 print( arr, n,i+1);
}
}


