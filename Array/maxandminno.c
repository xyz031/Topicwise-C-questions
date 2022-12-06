
#include <stdio.h>

int max(int arr[],int n,int i);
 int main()
 {

        int n,m=0,i=0;
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

m=max(arr,n,i);

printf("%d",m);
return 0;
}

int max(int arr[],int n,int i)
{
 static int m=0;
    if(m<arr[i] && i<n)
{    m=arr[i];
max(arr,n,(i+1));
}
return m;
}


