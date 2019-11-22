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
		sum+=i;
	}
	printf("THE SUM =%d", sum);

}
