 #include<stdio.h>
 #include<math.h>
 int main()
 {
      int a,n=0,d;
      float r=0;
      scanf("%d",&a);
       for (int i = a;  i!=0; i=i/10)
       {
         n++;

       }
for (int i=a; i!=0; i=i/10 )
{
    d=i%10;
    r=r+pow(d,n);
}
  
printf("%f",r);




return 0;
}
