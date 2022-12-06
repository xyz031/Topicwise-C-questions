#include<stdio.h>
int main(){
   int num,reverse_number;

   //User would input the number
   printf("\nEnter any number:");
   scanf("%d",&num);

   
   reverse_number=reverse_function(num);
 if (reverse_number==1)
 {
    printf("the no is a palindrome");
 }
 else
 {
    printf("it is not a palindrome");
 }
 
 
   return 0;
}
int sum=0,rem;
reverse_function(int num){
int copy=num;
   if(num>0){
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;


if (copy==sum)
{
    return 1;
}
else{
return 0;
}

}