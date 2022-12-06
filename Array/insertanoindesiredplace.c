#include<stdio.h>
int main()
{
//Ghanendra Yadav
  int i,arr[50],pos,len;
  int newitem;
 
  printf("Enter no. of elements you want for the array:\n");
  scanf("%d",&len);
 
  printf("Enter %d elements for the array:\n",len);
  for(i=0;i<len;i++)
            scanf("%d",&arr[i]);
 
  printf("Enter the element you want to insert:\n");
  scanf("%d",&newitem);
  printf("Enter position for the newitem element:\n");
  scanf("%d",&pos);
 
  len ++;
  pos --;
  i = len-1;
 
  while(i>=pos){
            arr[i]=arr[i-1];
            i--;
  }
  arr[pos] = newitem;
  printf("Array after inserting newitem element\n");
 
  for(i=0;i<len;i++)
            printf(" %d",arr[i]);
 
  return 0;
}