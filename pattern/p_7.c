//pattern:
//    1
//   12
//  123
// 1234
#include <stdio.h>
void main()
{
  int i,j,k;
  int n=5; // size of the pattern
  for(i=1;i<=n;i++)
  {
    for(k=n-i+1;k>=1;k--)
      printf(" ");
    for(j=1;j<=i;j++)
      printf("%d", j);
   printf("\n");
   }
}
