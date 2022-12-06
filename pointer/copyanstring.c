 #include<stdio.h>
 int main()
 {
     char a[10],b[10];
     int n,count=0;

char *ptr=a,*ptr2=b;

printf("enter the string\n");
    scanf("%s",ptr);
    




ptr=a;
for (; *ptr != '\0'; ptr++)
{
    *ptr2=*ptr;
    ptr2++;

}
ptr2=b;
ptr=a;
for (; *ptr != '\0';ptr++ ,ptr2++)
{
   printf("%c",*ptr2);

}

}
