
 #include<stdio.h>
 int main()
 {
    int n,c,j,i,a,sum=0;
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

printf("The upper triangle matrix is\n");
for (int x = 0; x < i; x++)
{
    for (int y = 0; y < j; y++)
    {
        if (x>y)
        {
            printf("0\t");
        }
        else{
             printf("%d\t",arr[x][y]);
             sum=sum+arr[x][y];
        }
    }
    
    printf("\n");

}

printf("sum of upper triangle matrix %d",sum);
return 0;
}
