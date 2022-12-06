
#include <stdio.h>


 int main()
 {

        int n,i=0;
    scanf("%d",&n);
    int arr[n],arr2[n];

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

n++;
i--;
printf("enter thr element want to insert");
if ( i=(n-1))
{
    scanf("%d",&arr[n-1]);
}

for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}



return 0;
}