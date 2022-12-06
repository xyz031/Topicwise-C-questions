 #include<stdio.h>
 int main()
 {
     int t;
     char u;
scanf("%d %c",&t,&u);
switch (u)
{
case 'C':
      printf("%dF",(9*t)/5+32);
    break;
case 'F':
printf("%dC",(t-32)*9/5);
default:
    break;
}


return 0;
}
