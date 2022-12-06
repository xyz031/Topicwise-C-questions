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
    
    printf("%d ",arr[x][y]+arr2[x][y]);
}
printf("\n");
}

return 0;
}
