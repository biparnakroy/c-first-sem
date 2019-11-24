//Question 4:
// Find the range of the set of numbers entered by the user 
// range in the diff b/w the max & min
#include <stdio.h>
void main()
{
  int max=0, min=2147485647;
  printf("ENTER THE SIZE OF ARRAY:\n");
  int n =0;
  scanf("%d", &n);
  int a[n];
  for(int i =0;i<n;i++)
  {
    scanf("ENTER THE ELEMENTS: %d", &a[i]);
  }
   for(int i =0;i<n;i++)
  {
    if(a[i]>max)
      max=a[i];
     if(a[i]<min)
       min=a[i];
  }
  int range= max-min;
  printf("THE RANGE OF THE ARRAY: %d", range);
}
