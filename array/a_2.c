//Question 2:
//WAP to read n number of values in an array. After that, count the total number of duplicate elements in that array. Then copy the //elements except the duplicate elements of that array into another array and display this array in reverse order.
#include <stdio.h>
void main()
{
  int n=0;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  int a[n], b[n], count = 0, i, j;
  printf("Enter %d integers\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
 
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < count; j++)
    {
      if(a[i] == b[j])
        break;
    }
    if (j == count)
    {
      b[count] = a[i];
      count++;
    }
  }
	printf("Reversed array obtained after removing duplicate elements:\n");
	int last=count;
  for (i = 0; i < count; i++)
  {
    printf("%d\n", b[last-1-i]);
  }
}
