//pattern 11:
//* * * *
// * * *
//  * *
//   *
void main()
{
  int i,j,k;
  int n =5; //size of the pattern
  for(i=n;i>=1;i--)
  {
    for(k=n-i+1;k>=1;k--)
      printf(" ");
     for(j=1;j<=i;j++)
      printf("* ");
     printf("\n");
   }
 }
