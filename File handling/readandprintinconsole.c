 #include<stdio.h>
 int main()
 {
     FILE *fptr;
    fptr=fopen("as.txt","r");
    char c[10];
    fscanf(fptr,"%s",c);
    printf("%s",c);
     fclose(fptr);
}
