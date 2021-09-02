//enter 5 numbers and find its total and percentage

#include <stdio.h>
int main()
{
 int a,b,c,d,e,total;
 float percentage;
 printf("enter the numbers:");
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 total=a+b+c+d+e;
 printf("total=%d",total);
 percentage=total/5;
 printf("percentage=%f",percentage);
return 0;
}
