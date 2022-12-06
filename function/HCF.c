#include<stdio.h>

// recursive function to find gcd of two number
int gcd(int a, int b)
{
     if(b!=0)
         return gcd(b, a%b); // general case
     else
         return a; // base case
}

int main()
{
     int n1, n2, result;

     printf("Enter two numbers: ");
     scanf("%d %d",&n1,&n2);

     result = gcd(n1,n2);
     printf("GCD of %d and %d = %d",n1,n2,result);

     return 0;
}

    
   
   
 


