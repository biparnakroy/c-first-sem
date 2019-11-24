//Write a program to accept 10 int a sort them in  accending order 
//Algorithm: selection sort 
#include <stdio.h>
void main()
{
  int a[10];
  int i,j,k, temp=0;
  printf("ENTER 10 ELEMNTS:");
  for(i=0;i<10;i++)
  {
    scanf("%d", &a[i]);
  }
    //selection sort
    for(i=0;i<9;i++)
    {
      int max=i;
      for(j=i+1;j<10;j++)
      {
        if(a[j]<a[max]){
          max=j;
        }
      }
      temp=a[i];
      a[i] =a[max];
      a[max]=temp;
    }
    for(i=0;i<10;i++)
      printf("%d ", a[i]);
  }
  
