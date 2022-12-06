 #include<stdio.h>
 int main()
 {
    int n,c,j,i,a,sumr=0,sumc=0;
    printf("enter no. of rows and column");
    scanf("%d%d",&i,&j);
    int arr[i][j],arr2[i][j];

printf("enter the elements");
for (int x = 0; x < i; x++)
{   for (int y = 0; y < j; y++)
{
    
    scanf("%d",&arr[x][y]);
}

}

for (int x = 0; x < i; x++)
{   for (int y = 0; y < j; y++)
{
    
    sumr=sumr+arr[x][y];
}
printf("sum of row element");
   printf("%d  ",sumr);
   sumr=0;
}

   for (int y = 0; y < j; y++){
for (int x = 0; x < i; x++)
{
    
    sumr=sumc+arr[x][y];
}
printf("sum of column element");
   printf("%d  ",sumc);
   sumc=0;
}

return 0;
}
