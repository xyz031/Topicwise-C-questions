 #include<stdio.h>
 int main()
 {
     int b[10],n;
scanf("%d",&n);
int *ptr=b;
for (int i = 0; i < n; i++)
{
    scanf("%d",ptr);
    ptr++;
}
ptr=b;
for (int i = 0; i < n; i++)
{
    printf("%d ",*ptr);
    ptr++;
}

}
