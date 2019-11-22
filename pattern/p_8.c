//pattern 8:
//1234
// 123
//  12
//   1
#include <stdio.h>
void main()
{
  int i,j,k;
  int n =5; //size of the pattern
  for(i=1;i<=n;i++)
  {
    for(k=1;k<=i;k++)
      printf(" ");
     for(j=1;j<=n-i+1;j++)
      printf("%d", j);
     printf("\n");
   }
 }
