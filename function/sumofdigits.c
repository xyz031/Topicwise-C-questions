 #include <stdio.h>
int cube(int n);
 int main()
 {
    int n,a;
    printf("enter the no\n");
    scanf("%d",&n);
    a=cube(n);
    printf("%d",a);
     return 0;
 }
    int sum=0;

 int cube(int n){
    int d;
    if (n>0)
    {
        d=n%10;
        sum=sum+d;
        cube(n/10);
    }
    else{
        return sum;
    }
     return sum;
 }


