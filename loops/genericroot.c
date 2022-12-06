 #include<stdio.h>
 int main()
 {
    int a,n,sum=0;
    scanf("%d",&a);
    for (int i = a; a >0; a=a/10)
    {
        n=n%10;
        sum=sum+n;
    }
    printf("%d",sum);
 

}