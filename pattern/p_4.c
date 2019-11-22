// pattern 4:
//	****
//	***
//	**
//	*
#include <stdio.h>
void main()
{
  int i,j;
  int n =5 // the size of the pattern
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
     }
      printf("\n");
   }
}
