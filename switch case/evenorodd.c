#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
  switch (a%2)
  {
  case 0:
 printf("even");
    break;
  
  default:
  printf("odd");
    break;
  }
}