#include <stdio.h>

void main()
{
    int i, n;
    printf("Print even numbers till: ");
    scanf("%d", &n);
    printf("All even numbers from 1 to %d are: \n", n);
     while(i<=n)
    {
        if(i%2==0)
            printf(" \n %d ",i);
            i++;

    }


}
