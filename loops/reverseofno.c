#include <math.h>
#include <stdio.h>
int main() 
{
int x,d,r=0;
scanf("%d",&x);
for (int i=x; x !=0;x=x/10 )
{
    d=x%10;
    r=r*10+d;
    
}
printf("%d",r);

    
} 
