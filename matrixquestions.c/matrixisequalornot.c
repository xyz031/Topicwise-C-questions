 #include<stdio.h>
 int main()
 {
    int n,c,j,i,a;
    scanf("%d%d",&i,&j);
    int arr[i][j],arr2[i][j];

for (int x = 0; x < i; x++)
{   for (int y = 0; y < j; y++)
{
    
    scanf("%d",&arr[x][y]);
}

}

for (int x = 0; x < i; x++)
{   for (int y = 0; y < j; y++)
{
    
    scanf("%d",&arr2[x][y]);
}

}

for (int x = 0; x < i; x++)
{   for (int y = 0; y < j; y++)
{
    
    if (arr[x][y]==arr2[x][y])
    {
        a=1;
        
    }
    else{
        a=0;
        
    }
    
}

}

if (a==1)
{
    printf("matrix is equal");
}
else{
    printf("matrix is not equal");
}

return 0;
}
