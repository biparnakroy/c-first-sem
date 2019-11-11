#include <stdio.h>
void main()
{
	printf("ENTER TWO NUMBERS\n");
	int a=0,b=0, max=0, min=0;
	scanf("%d", &a);
	scanf("%d", &b);
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
	if(max%min==0)
	{
		int x=max/min;
		float y=max/min;
		printf("%d\n", x);
		printf("%f\n", y);
	}
	else
	{
		int x=max%min;
		float y= (float)max/(float) min;
		printf("%d / %d\n", x, min);
		printf("%f\n", y);
	}
}
	