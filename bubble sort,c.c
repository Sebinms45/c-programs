#include<stdio.h>
int main()
 {
  int array[10],i,j,n,temp;
  printf("enter the number of number :");
  scanf("%d",&n);
  printf("enter the number to sort :");
  for(i=0;i<n;i++)
  {
  scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++)
  {
  for(j=0;j<(n-i);j++);
  {
   if(array[j]>array[j+1])
   {
    temp=array[j+1];
    array[j+1]=array[j];
    array[j]=temp;
   }
  }
  }
  printf("the sorted list is \n");
  for(i=0;i<n;i++)
  {
  printf("%d \n",array[i]);
  }
  return 0;
 }
