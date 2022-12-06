 #include<stdio.h>
 int main()
 {
     char o;
    scanf("%c",&o);
     int a,b;
scanf("%d%d",&a,&b);
switch (o)
{
case '+':
      printf("%d",a+b);
    break;
case '-':
printf("%d",a-b);
    break;
case '*':
printf("%d",a*b);
    break;
case '/':
printf("%d",a/b);
break;
default:
    break;
}


return 0;
}
