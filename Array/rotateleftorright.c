 #include<stdio.h>
 int main()
 {
    int n,c,j,a;
    printf("enter number of element");
    scanf("%d",&n);
    int arr[n];
printf("enter the elements");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
printf("enter the index");
scanf("%d",&c);

for (int i=0 ; i< c; i++)
{ a=arr[n-1];
    for ( j=n-1; j>0; j--)
    {  
        arr[j]=arr[j-1];
        
    }
       arr[j]=a;
}

for (int i = 0; i < n; i++)
{
    printf("%d",arr[i]);
}



return 0;
}
