// newton forward interpolation 
#include<stdio.h>

// calculating u mentioned in the formula 
float u_cal(float u, int n) 
{ 
	float temp = u; 
	for (int i = 1; i < n; i++) 
		temp = temp * (u - i); 
	return temp; 

} 

// calculating factorial of given number n 
int fact(int n) 
{ 
	int f = 1; 
	for (int i = 2; i <= n; i++) 
		f *= i; 
	return f; 
} 

void main() 
{ 
	// Number of values given 
	int n = 4; 
	float x[] = { 4.0, 6.0, 8.0, 10.0}; 
	
	// y[][] is used for difference table 
	// with y[][0] used for input 
	float y[n][n]; 
	y[0][0] = 1.0;
	y[1][0] = 3.0; 
	y[2][0] = 8.0; 
	y[3][0] = 16.0; 

	// Calculating the forward difference 
	// table 
	for (int i = 1; i < n; i++) { 
		for (int j = 0; j < n - i; j++) 
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1]; 
	} 

	// Displaying the forward difference table 
	for (int i = 0; i < n; i++) { 
		printf("%f\t", x[i] );
		for (int j = 0; j < n - i; j++) 
			printf("%f\t",y[i][j]);
		printf("\n");
	} 

	// Value to interpolate at 
	float value = 5; 

	// initializing u and sum 
	float sum = y[0][0]; 
	float u = (value - x[0]) / (x[1] - x[0]); 
	for (int i = 1; i < n; i++) { 
		sum = sum + (u_cal(u, i) * y[0][i]) / fact(i); 
	} 

	printf("\n%f",sum);
}
