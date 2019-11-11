#include <stdio.h>
void main()
{
	int l=0,b=0, ra=0,rp=0;
	float r=0.0, cp=0.0, ca=0.0;
	printf("ENTER THE LENGHT  RECTANGLE\n");
	scanf("%d\n", &l);
	printf("ENTER THE BREADTH RECTANGLE\n");
	scanf("%d\n", &b);
	printf("ENTER THE RADIUS OF A CIRCLE\n");
	scanf("%f\n", &r);
	rp= 2*(l+b);
	ra= l*b;
	printf("PERIMETER OF SQUARE=%d\n", rp);
	printf("AREA OF RECTANGLE=%d\n", ra);
	cp= 2*(3.145)*r;
	ca= (3.145)*r*r;
	printf("PERIMETER OF CIRCLE=%f\n", cp);
	printf("AREA OF CIRCLE=%f\n", ca);
}

	