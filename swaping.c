#include <stdio.h>
#include <math.h>//to sqrt
int main()
{
 float a,b,c,disc,r1,r2;
 printf("enter the numbers:");
 scanf("%f %f %f",&a,&b,&c);
 disc = sqrt(b*b-4*a*c);
 r1 =(-b+disc)/(2*a);
 r2 =(-b-disc)/(2*a);
 printf("The square root are %f and %f",r1,r2);
 return 0;
}
