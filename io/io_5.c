//Question 5:
//Input two integer numbers and divide the larger number by the smaller one. Then display the
//result using printf() function as a fractional number first and then as a real valued number.
//(Example: 9 divided by 5 shall yield “ 4/5” and “1.8” respectively. )
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
	
