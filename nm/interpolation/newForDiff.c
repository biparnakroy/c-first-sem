#include <stdio.h>
//interpolation
int  calcP(int a, int i)
{
	float temp = a; 
	for (int i = 1; i < a; i++) 
		temp = temp * (a - i); 
	return temp; 
}
int fact(int n)
{ 
	int f = 1; 
	for (int i = 2; i <= n; i++) 
		f *= i; 
	return f; 
	
}
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
		double t[n-1][n];
		int temp=0;
		// table
		while(temp>n-1)
		{
			for(int i=0;i<n-temp;i++)
			{	
				t[temp][i]=_y[i+1]-_y[i];
			}
			temp++;
		}
		//value compute
		double p;
		p=(x - _x[0])/(_x[1]-_x[0]);
		double y;
		y= _y[0];
		temp=0;
		 while(temp>n-1)
		 {
			y+=(calcP(p,temp+1) /fact (temp+1))*t[temp][0];
			temp++;
		 }
		// print
		printf("y=%lf", y);
}
