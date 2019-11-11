#include <stdio.h>
void main()
{
	printf("ENTER A THREE DIGIT NUMBER\n");
	int n=0;
	scanf("%d", &n);
	int copy=n, sum=0;
	while(copy!=0)
	{
		sum+=(copy%10);
		copy/=10;
	}
	printf("\n THE SUM OF DIGITS = %d", sum);
}
	