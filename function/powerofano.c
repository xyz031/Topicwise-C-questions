 #include <stdio.h>
int cube(int n, int x);
 int main()
 {
    float x,n;
    printf("enter the no\n");
    scanf("%f",&x);
     printf("enter the no\n");
    scanf("%f",&n);
    cube(n, x);
     return 0;
 }

 int cube(int n,int x){
    float d=1;
    for (int i = 0; i < n; i++)
    {
        d=d*x;
    }
        printf("%f",d);
    

 }


