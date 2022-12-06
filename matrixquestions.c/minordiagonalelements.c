 #include<stdio.h>
 int main()
 {
    int n,c,j,i,sum=0;
    scanf("%d%d",&i,&j);
    int arr[i][j],arr2[i][j];

for (int x = 0; x < i; x++)
{   for (int y = 0; y < j; y++)
{
    
    scanf("%d",&arr[x][y]);
}

}



for (int x = 0,y=(j-1); x < i,j>0; x++,j--)
{   

    
    sum=sum+arr[x][y];
  


}

printf("sum of diagonal elements %d",sum);

return 0;
}
