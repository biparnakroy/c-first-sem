#include <stdio.h>
void main()
{
	int n=0;
	int sum=0;
	printf("ENTER THE NUMBER TO FIND SUM OF DIGITS\n");
	scanf("%d", &n);
	int copy=n;
	while(copy!=0)
	{
		sum=sum+ (copy%10);
		copy=copy/10;
	}
	printf(" THE SUM OF DIGITS = %d", sum);
}
