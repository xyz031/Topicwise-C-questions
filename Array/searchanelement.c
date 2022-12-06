 #include<stdio.h>
 int main()
 {
    int n,first,second,a;
    scanf("%d",&n);
    int arr[n];

for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}

scanf("%d",&a);

for (int i = 0; i < n; i++)
{
if (arr[i]==a)
{
    printf("element found");
}
else{
    printf("not found");
}


}



return 0;
}
