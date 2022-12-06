 #include<stdio.h>
 int main()
 {
    int n,c,j,i,a=0;
    printf("enter no. of rows and column");
    scanf("%d%d",&i,&j);
    int arr[i][j],arr2[i][j];


for (int x = 0; x < i; x++)
{
    for (int y = 0; y < j; y++)
    {
  scanf("%d",&arr[x][y]);
    
     
    }
    
    

}

for (int x = 0; x < i; x++)
{
    for (int y = 0; y < j; y++)
    {
     if (arr[x][y]==0)
     {
        a++;
     }
     
    
     
    }
    


}


if (a>i*j/2)
{
    printf("the given matrix is sparse");
}
else{
    printf("matrix is not sparse");
}

return 0;
}
