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
