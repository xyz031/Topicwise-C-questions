 #include<stdio.h>
 int main()
 {
    int a,n=0;
    scanf("%d",&a);
    for (int i = a; a >0; a=a/10)
    {
        n++;
    }
    printf("%d",n);
 

}