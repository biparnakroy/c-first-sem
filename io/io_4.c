#include <stdio.h>
void main()
{
	printf("ENTER THE NUMBER TO FIND IF IT IS ODD OR EVEN:\n");
	int n=0;
	scanf("%d", &n);
	if(n%2==0)
		printf("%d IS EVEN\n", n);
	else
		printf("%d IS ODD\n", n);
}
