 #include<stdio.h>
 int main()
 {
     int b[10],n,a,i=0,c;
scanf("%d",&n);
int *ptr=b;
for (int i = 0; i < n; i++)
{
    scanf("%d",ptr);
    ptr++;
}
ptr=b;
for (int i = 0; i < n/2; i++)
{
    a=*ptr;
    *ptr=b[n-i-1];
    b[n-i-1]=a;
    ptr++;
}
ptr=&b[n-i-1];

for (int i = 0; i < n; i++)
{
   printf("%d ",b[i]);
}






}
