#include <stdio.h>
void main()
{
	printf("ENTER THE NUMBER TO FIND FACTORIAL:\n");
	int n=0;
	scanf("%d",&n);
	int i=0;
	int fact=1;
	 if(n==0)
	 {
		 printf("FACTORIAL = 1\n");
	 }
	 else
	 {
		 for(i=1;i<=n;i++)
		 {
			 fact*=i;
		 }
		 printf("FACTORIAL = %d\n", fact);
	 }
}
