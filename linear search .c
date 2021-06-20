
#include <stdio.h>

int main()
{
    int i,num,key;
    float avg;
    printf("Enter the number of elements in the array:");
    scanf("%d",&num);
    int array[num];
    printf("Enter the %d array elements \n",num);
    for(i=0;i<num;i++)
     {
        scanf("%d",&array[i]);
     }

    printf("Enter the number to search:");
    scanf("%d",&key);
    for(i=0;i<num;i++)
     {
        if(array[i]==key)
      {
        printf("The number %d is found in the array",array[i]);
        break;
      }
     }
    if(i==num)
    printf("\n The number %d is !found",key);
    return 0;
}

