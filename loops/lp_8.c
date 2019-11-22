//Question 8:
//Write a C program to find out sum of the following series.
//S = 1@ + 2@ + 3@ + 4@ + … + n@
//where, n@ is the sum of all factors of n. Example: 6@ = 1+2+3+6 = 12
#include <stdio.h>
void main()
{
	printf("ENTER THE NUMBER TO FIND THE SUM\n");
	int n =0;
	scanf ("%d", &n);
	int sum=0, copy=0,fact=0, i=0, j=0;
	for(i=1;i<=n;i++)
	{
		copy=i;
		for(j=1;j<=copy;j++)
		{
			if(copy%j==0)
				fact+=j;
		}
		sum+=fact;
		fact=0;
	}
	printf("THE SUM OF SERIES= %d", sum);
}
