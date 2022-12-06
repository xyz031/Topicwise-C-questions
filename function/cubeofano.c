 #include <stdio.h>
int cube(int n);
 int main()
 {
    int n;
    printf("enter the no\n");
    scanf("%d",&n);
    cube(n);
     return 0;
 }

 int cube(int n){
    printf("%d",n*n*n);

 }


