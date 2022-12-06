 #include <stdio.h>

 int main()
 {
     char x;
     scanf("%c", &x);
     if (x >= 'a' && x <= 'z')
     {
         printf("small letter");
     }
  
     else{
         printf("capital ");
     }

     return 0;
 }


