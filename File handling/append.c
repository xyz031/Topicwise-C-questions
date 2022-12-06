 #include<stdio.h>
 int main()
 {
     FILE *fptr;
    fptr=fopen("as.txt","a");
     char c='A';
     fprintf(fptr,"\n%c",c);
     fclose(fptr);
}
