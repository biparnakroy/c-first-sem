//Question1:
//Write a C program which prints all integers divisible by n between 1 and 100 where value of n is
//provided by the user.

#include <stdio.h>
void main()
{
	int n=0;
	int i=0;
	/*taking n as input from user to check divisibility for n*/
	scanf("%d", &n);
	/* checking divisibility for no. 1 to 100*/
	for(i=1; i<=100;i++)
	{
		if(i%n==0)
			printf("%d\n",i);
	}
}
