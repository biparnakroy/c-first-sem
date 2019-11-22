#include <stdio.h>
void main()
{
	printf("ENTER THE NUMBER TO FIND PRIME FACTORS:\n");
	int n =0;
	scanf("%d", &n);
	int copy=n, temp=2;
	if(n==1 || n==0)
		printf("NO PRIME FACTORS");
	else
	{
		while(copy!=1)
		{
			if(copy%temp==0)
			{
				printf("%d\n", temp);
				copy/=temp;
			}
			else
			{
				temp++;
			}
		}
	}
}
		
