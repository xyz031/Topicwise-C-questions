 #include<stdio.h>
 int main()
 {
     int b[10],n,a[10],c[10];
scanf("%d",&n);
int *ptr=a;
int *ptr2=b,*ptr3=c;

for (int i = 0; i < n; i++)
{
    scanf("%d",ptr);
    ptr++;
}

for (int i = 0; i < n; i++)
{
    scanf("%d",ptr2);
    ptr2++;
}

ptr2=b;
ptr=a;
for (int i = 0; i < n; i++)
{
    *ptr3=*ptr;
    *ptr=*ptr2;
    *ptr2=*ptr3;
    ptr++;
    ptr2++;
    ptr3++;
}
ptr=a;
ptr2=b;
for (int i = 0; i < n; i++)
{
    printf("%d ",*ptr2);
    ptr2++;
}

}
