//pattern 9
//54321
// 4321
//  321
//   21
//    1
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
      printf("%d", j);
     printf("\n");
   }
 }
