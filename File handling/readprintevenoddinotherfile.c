         #include<stdio.h>
 int main()
 {
     FILE *fptr;
    fptr=fopen("as.txt","r");
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        
    fscanf(fptr,"%d",&a[i]);
    }
    
  
     fclose(fptr);

 FILE *fptr2;
 fptr2=fopen("even.txt","w");

 for (int i = 0; i < 3; i++)
 {
    if (a[i]%2==0)
    {
        fprintf(fptr2,"even no %d\n",a[i]);
    }
    else{
        fprintf(fptr2,"odd no %d\n",a[i]);
    }
 }
 
 
fclose(fptr2);




}
