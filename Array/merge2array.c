
#include <stdio.h>


 int main()
 {

        int n,x;
    scanf("%d %d",&n,&x);
    int arr[n],arr2[x],arr3[n+x];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

for (int i = 0; i < x; i++)
{
    scanf("%d",&arr2[i]);
}

for (int i = 0; i < (n); i++)
{
    arr3[i]=arr[i];
}

for (int i = 0,j=(n); i < (x),j<(n+x); i++,j++)
{
    arr3[j]=arr2[i];
}

for (int i = 0; i < (n+x); i++)
{
    printf("%d ",arr3[i]);
}




return 0;
}