#include <stdio.h>
void main()
{
	printf("ENTER THREE NUMBERS TO FIND MAX/MIN\n");
	int a=0,b=0,c=0;
	scanf("%d\n%d\n%d\n", &a,&b,&c);
	int max=0; 
	max= (a>b)? (a>c? a:c) : (b>c? b:c);
	int min=0;
	min=(a<b)? (a<c? a:c) : (b<c? b:c);
	printf("THE LARGEST NUMBER = %d\n", max);
	printf("THE SMALLEST NUMBER = %d", min);
}



	