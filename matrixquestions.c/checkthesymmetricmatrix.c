 #include<stdio.h>
 int main()
 {
    int n,c,j,i,a=0;
    printf("enter no. of rows and column");
    scanf("%d%d",&i,&j);
    int arr[i][j],arr2[j][i];


for (int x = 0; x < i; x++)
{
    for (int y = 0; y < j; y++)
    {
  scanf("%d",&arr[x][y]);
    
     
    }
    
    

}

for (int y = 0; y < j; y++)
{
    for (int x = 0; x < i; x++)
    {
     
     arr2[y][x]=arr[x][y];
    
     
    }
    


}


for (int x = 0; x < i; x++)
{
    for (int y = 0; y < j; y++)
    {
       if (arr[x][y]==arr2[x][y])
       {
        a++;
    
       }
     else{
         a==0;
     }  
    
     
    }
    
    

}



 if (a==(i*j))
 {
      printf("matrix is symmentric");
 }
 else
 {
     printf("matrix is unsymmentric");
 }




return 0;
}
