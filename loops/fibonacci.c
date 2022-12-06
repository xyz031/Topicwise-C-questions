 #include<stdio.h>
 int main()
 {
      int n,i=3,sum=0;
      int f=0,s=1;
      int t=f+s;
      scanf("%d",&n);
      printf("%d,%d,",f,s);
do
{

printf("%d,",t);
    f=s;
    s=t;
    t=s+f;
    i++;
} while (i<=n);

return 0;
}


