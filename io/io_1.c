//Question 1:
//Write a C program that reads two values from the keyboard, swaps their values and prints out the
result.
#include <stdio.h>
void main()
{
	printf("ENTER THE VALUES\n");
	int a,b,temp=0;
	scanf("%d", &a);
	scanf("%d", &b);
	temp=a;
	a=b;
	b=temp;
	printf(" THE SWAPED VALUES ARE %d,%d", a,b);
}
