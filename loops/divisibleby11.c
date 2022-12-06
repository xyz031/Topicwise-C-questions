
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int x,d,sume=0,sumo=0;
 scanf("%d",&x);
 for (int i = x,c=1; x>0; x=x/10,c++)
 {
    d=x%10;
    if (c%2==0)
    {
        sume=sume+d;
    }
    else{
        sumo=sumo+d;
    }
 }
 printf("%d\n",sume);
  printf("%d\n",sumo);
  if (sume==sumo)
  {
     printf("divisible by 11");
  }
  else{
     printf("not divisible by 11");
 }

}