         #include<stdio.h>
 int main()
 {
     FILE *fptr;
    fptr=fopen("as.txt","w");
     char c[5]={'a','a','a','s','\0'};
     fprintf(fptr,"%s",c);
     fclose(fptr);
}
