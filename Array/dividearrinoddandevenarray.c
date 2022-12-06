 #include<stdio.h>
 int main()
 {
    int n,j=0,k=0;
    scanf("%d",&n);
    int arr[n],arr2[100],arr3[100];

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

for (int i = 0; i < n; i++)
{
    if (arr[i]%2==0)
    {
        arr2[j++]=arr[i];
    }
   else{
    arr3[k++]=arr[i];
   } 
}

for (int i = 0; i < j; i++)
{
    printf("%d\n",arr2[i]);
}

for (int i = 0; i < k; i++)
{
    printf("%d ",arr3[i]);
}

return 0;
}
