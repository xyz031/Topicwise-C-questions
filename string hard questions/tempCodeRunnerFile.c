
 #include<stdio.h>
     int main()
 {
     int c=0,b;
scanf("%d",&b);

int d=b%10;
for (int i = b; i >0 ; b=b/10)
{
    c++;
}

printf("%d",c);
    
    
}