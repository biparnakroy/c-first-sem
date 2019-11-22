//Question:1
//WAP to reverse the elements of an array
#include <stdio.h>
void main()
{
	printf("ENTER THE SIZE OF THE ARRAY\n");
	int n=0,i=0;
	scanf("%d", &n);
	int a[n];
	printf("ENTER THE ELEMENTS OF THE ARRAY\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	int b[n];
	for(i=n-1;i>=0;i--)
	{
		b[i]=a[n-1-i];
	}
	printf("THE REVERSED ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", b[i]);
	}
}
	
	
	
