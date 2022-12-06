 #include<stdio.h>
 int main()
 {
    int n,c,j,i,a,b,sumr=0,sumc=0;
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


 a=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2]);
    b=arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2]);
    c=arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);

printf("determinant of matrix is %d",a-b+c);
return 0;
}
