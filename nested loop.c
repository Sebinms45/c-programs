#include <stdio.h>
int main()
{
 int i,j;
 for(i=0;i<3;i++)
 {
  printf("\n outer loop i:%d",i);
  for(j=0;j<3;j++)
  {
  printf("\n inner loop j:%d",j);
  }
 }
 return 0;
}
