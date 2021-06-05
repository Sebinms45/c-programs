
#include <stdio.h>

int main()
{
    int i, n;
    printf("Print even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);
    for(i=1; i<=n; ++i)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
