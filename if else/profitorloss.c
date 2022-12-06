#include <math.h>
#include <stdio.h>
int main()
 {
int c,s;
scanf("%d%d",&c,&s);
if ((s-c)>=0)
{
    printf("profit is %d",s-c);
}
else{
    printf("loss is %d",c-s);
}

    return 0;
} 
