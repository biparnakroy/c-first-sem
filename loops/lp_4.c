//Quetsion 4
//Write a C program to find out sum of the following series.
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
// alternatively the problem can be solved by using the fomulae s=n(n+1)/2 

