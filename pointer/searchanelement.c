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
for (int i = 0; i < n; i++)
{
 if (*ptr==2)
 {
    a=i+1;
printf("index of number is %d\n",a);
 }
 ptr++;
}






}
