 #include<stdio.h>
 int main()
 {
     int b,h;
scanf("%d%d",&b,&h);
int *ptr=&b,*ptr2=&h;

printf("sum is =%d",(*ptr+*ptr2));

}
