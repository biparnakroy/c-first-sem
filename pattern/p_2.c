//pattern 2:
// * * * *
//   * * *
//     * *
//       *
#include <stdio.h>
void main()
{
  int i,j,k;
  int n =5; //size of the pattern
  for(i=1;i<=n;i++)
  {
    for(k=1;k<=i;k++)
      printf(" ");
     for(j=n-i+1;j>=1;j--)
      printf("*");
     printf("\n");
   }
 }
   
