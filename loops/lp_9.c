#include <stdio.h>
void main()
{
	printf("THE PRIME NUMBERS FROM 1 TO 100 :\n");
	int i=0, copy=0, j=0, temp;
	for(i=2;i<=100;i++)
	{
		temp=0;
		for (j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{	
				temp++;
				break;
			}
		}
		if(temp==0)
			printf("%d\n", i);
	}
}
