 #include<stdio.h>
 int main()
 {
     char b[10];
     int n,count=0;

char *ptr=b;

printf("enter the string\n");
    scanf("%s",ptr);
    




ptr=b;
for (; *ptr != '\0'; ptr++)
{
    
    count++;
}
printf("length of string %d",count);


}
