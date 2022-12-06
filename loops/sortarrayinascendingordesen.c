#include<stdio.h>
 #include<math.h>
 int main()
 {int n;
scanf("%d",&n);
     float arr[n],a;
for (int i = 0; i < n; i++)
{
    scanf("%f",&arr[i]);


}

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j<n; j++)
    if (arr[j]<arr[i])
    {
        /* code */
        a=arr[i];
        arr[i]=arr[j];
        arr[j]=a;
    }
    
    
    
}
for (int i = 0; i < n; i++)
{
    

printf("%f  ",arr[i]);
}

return 0;
}
