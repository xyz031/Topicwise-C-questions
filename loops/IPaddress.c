#include <math.h>
#include <stdio.h>
int main() 
{
int no,i,j,cnt;
scanf("%d",&no);

srand(time(NULL));
for(i=0;i<no;i++)
 {
for(j=0;j<4;j++)
{
cnt=rand()%255;
printf("%d",cnt);
if(j<3)
printf(".");
}
printf("\n");
}
} 