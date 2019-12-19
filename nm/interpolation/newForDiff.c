#include <stdio.h>
//interpolation
// only work for 4 reading tables
void main()
{
	//no of data entries
	int n;
	scanf("%d",&n);
	//input of data
	double  _x[n],_y[n];
	for(int i=0;i<n;i++)
	{
		printf("x%d:", (i+1));
		scanf("%lf",&_x[i]);
	
		printf("y%d:", (i+1));
		scanf("%lf",&_y[i]);
	}
	//value to interpolate
	 double x;
	scanf("%lf", &x);
	//newton forward
		double dy[n-1];
		double ddy[n-2];
		double dddy[n-3];
		// table
		for(int i=0;i<n-1;i++)
		{	
			dy[i]=_y[i+1]-_y[i];
		}
		for(int i=0;i<n-2;i++)
		{
			ddy[i]=dy[i+1]-dy[i];
		}
		for(int i=0;i<n-2;i++)
		{
			dddy[i]=ddy[i+1]-ddy[i];
		}
		//value compute
		double p;
		p=(x - _x[0])/(_x[1]-_x[0]);
		double y;
		y= _y[0] + (p* dy[0]) + ( ((p*(p-1))/2)*ddy[0] )+ ( ((p*(p-1)*(p-2))/6)*dddy[0] );
		// print
		printf("y=%lf", y);
}
