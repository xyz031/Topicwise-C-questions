#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int count=0,n,x,j=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
    char num[100];
    scanf("%s",num);
    n=strlen(num);
    //   for(int j=0;j<10;j++){
    // for (int i=0; i<n;i++) {
       
    //    if (num[i]=='j')
    //    {
    //     count++;
    //    }

    //   }

    //    printf("%d ",count);
  
for (int i=0; i<n;i++){
if (num[i]=='1')
{
    count++;
}
if (num[i]=='2')
{
    a++;
}
if (num[i]=='3')
{
    b++;
}
if (num[i]=='4')
{
    c++;
}
if (num[i]=='5')
{
    d++;
}
if (num[i]=='6')
{
   e++;
}
if (num[i]=='7')
{
    f++;
}
if (num[i]=='8')
{
    g++;
}
if (num[i]=='9')
{
    h++;
}
if (num[i]=='0')
{
    j++;
}
}
printf("%d ",j);
printf("%d ",count);
printf("%d ",a);
printf("%d ",b);
printf("%d ",c);
printf("%d ",d);
printf("%d ",e);
printf("%d ",f);
printf("%d ",g);
printf("%d ",h);
}
