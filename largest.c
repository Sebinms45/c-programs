#include <stdio.h>
void main()
{
  int a,b,c;
  printf("enter the number \n");
  scanf("%d %d %d",&a,&b,&c);

  if(a>b  && a>c)
{
   printf("number is %d",a);
}
  else
   if(b>a  && b>c)
{
   printf("number is %d",b);
}
else
    printf("number is %d",c);

}
