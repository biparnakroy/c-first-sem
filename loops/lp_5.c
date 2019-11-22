//Question 5:
//Write a C program to find out sum of the following series.
// S=1.2+2.3+3.4+4.5+ ... +n.(n+1)
#include <stdio.h>
void main()
{
	int n=0;
	printf("ENTER THE NUMBER TO FING THE SUM\n");
	scanf("%d", &n);
	int i=0;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=(i*(i+1));
	}
	printf("THE SUM =%d", sum);

}
