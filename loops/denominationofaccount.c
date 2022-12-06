#include <stdio.h>
int main()
{
     int a, d, e, f, g;
     scanf("%d", &a);
 for (int i = a; a > 500;)
 {
     d=a/500;
     a=a%500;
 }
 printf("500=%d\n",d);
  for (int i = a; a > 100;a=a%100)
 {
     e=a/100;
     
 }
 printf("100=%d\n",e);
  for (int i = a; a > 50;a=a%50)
 {
     f=a/50;
     
 }
 printf("50=%d\n",f);
  for (int i = a; a > 0;a=a%1)
 {
     g=a/1;
     
 }
 printf("1=%d\n",g);
 printf("total=%d",(d+e+f+g));
}