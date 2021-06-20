#include <stdio.h>

int main()
{
    int i,num,sum=0;
    float avg;
    printf("Enter the number of elements in array:");
    scanf("%d",&num);
 int array[num];
    printf("Enter the %d array elements \n",num);
    for(i=0;i<num;i++)
     {
        scanf("%d",&array[i]);
     }
 printf("Array is:\n");
    for(i=0;i<num;i++)
     {
         printf("%d\n",array[i]);

     }
    for(i=0;i<num;i++)
     {
         sum=sum+array[i];
     }
       printf("Sum of array elements is %d",sum);
       avg=sum/num;
       printf("\nAverage of the elements is %2f",avg);
    return 0;
}
