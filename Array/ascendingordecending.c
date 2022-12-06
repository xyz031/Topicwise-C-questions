
#include <stdio.h>


 int main()
 {

        int n,x;
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (arr[i]>arr[j])
        {
            x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
        }
        
    }
    
}

for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}



return 0;
}