//Write a menu-driven program for finding roots of a nonlinear equation using Bisection, Regula Falsi and Newton-Raphson method.
//let function be f(x)=x^3 -4x -9
#include <stdio.h>
#include <math.h>
#define EPSILON 0.001
// function value generator
float func(float x) 
{ 
    return x*x*x - 4*x - 9; 
} 
// function derivative value generator
float deriFunc(float x) 
{ 
    return 3*x*x - 4 ; 
} 
  
// Bisection method yeilding root of func(x) with error of EPSILON 
void bisection(float a, float b) 
{ 
    if (func(a) * func(b) >= 0) 
    { 
        printf("You have not assumed right a and b\n"); 
        return; 
    } 
  
    float c = a; 
    while ((b-a) >= EPSILON) 
    { 
        // Find middle point 
        c = (a+b)/2; 
  
        // Check if middle point is root 
        if (func(c) == 0.0) 
            break; 
  
        // Decide the side to repeat the steps 
        else if (func(c)*func(a) < 0) 
            b = c; 
        else
            a = c; 
    } 
    printf("The value of root is : %f",c); 
} 
//regular falsi methode yielding roots with efficiency of EPLSILON
void regFa(float a, float b)
{
	if(func(a)*func(b) <0)
		printf("You have not entered the right values of a and b\n");
	//checking if a & b have right values 
    float	c = a; //initailize the result
	while((b-a)>=EPSILON)
	{
		//Find the point that touches with x- axis
		c = (a*func(b) - b*func(a))/ (func(b) - func(a)); 
		//checking if that point is the the root
		if(func(c)==0.0)
			break;
		// deciding which side to repeat
		else if (func(c)*func(a)<0)
			b=c;
		else
			a=c;
	}
	printf("The value of the root is : %f",c);
}	
//newton rapson methode
void newtonRapson(float x)
{
	float h= func(x)/deriFunc(x);
	float abs_h=0.0;
	abs_h= h>0? h:-h;
	while(abs_h>EPSILON)
	{
		x=x-h;
		h=func(x)/deriFunc(x);
	}
	printf("The value of the root is : %f",x);
}
void main()
{
	printf("Enter the choice of method to find the roots of f(x)=x^3 -4x -9 \n");
	printf("1. Bisection Method\n 2. Regular Falsi Method\n 3. Newton Rapson Method\n");
	int n=0;
	float a1,b1,a2,b2,a3;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
				a1=-200.0;
				b1=300.0;
				bisection(a1,b1);
				break;
		case 2 :
				a2=-200.0;
				b2=300.0;
				regFa(a2,b2);
				break;
		case 3:
				a3=-20;
				newtonRapson(a3);
				break;
		default:
				printf("Wrong Choice! \n");
	}
}
