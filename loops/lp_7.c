#include <stdio.h>
void main()
{
	printf("ENTER THE NUMBER TO FIND THE SUM\n");
	int n =0;
	scanf("%d", &n);
	int fact=1, sum=0, copy=0,i=0;
	for(i=1;i<=n;i++)
	{
		copy=i;
		while(copy!=0)
		{
			fact*=copy;
			copy=copy-1;
		}
		sum+=fact;
		fact=1;
	}
	printf("THE SUM = %d", sum);
}

	
