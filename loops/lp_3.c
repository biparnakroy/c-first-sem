#include <stdio.h>
void main()
{
	int n=0;
	int sum=0;
	printf("ENTER THE NUMBER TO REVERSE THE DIGITS\n");
	scanf("%d", &n);
	int copy=n;
	while(copy!=0)
	{
		sum=(sum*10) + (copy%10);
		copy=copy/10;
	}
	printf(" THE REVERSED NO. = %d", sum);
}
