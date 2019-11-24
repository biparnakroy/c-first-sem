//Write a program to accept 10 int a sort them in  accending order 
//Algorithm: bubble sort sort 
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
    for(i=0;i<10;i++)
    {
      
      for(j=0;j<10-i;j++)
      {
        if(a[j]>a[j+1]){
          temp=a[j];
		  a[j] =a[j+1];
          a[j+1]=temp;
        }
      }
      
    }
    for(i=0;i<10;i++)
      printf("%d ", a[i]);
  }
  
