//Quetsion 4:
//An integer is entered as an input through the keyboard. Write a program to find out whether it is
//an odd number or an even number.
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
