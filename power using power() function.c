#include <stdio.h>
#include <math.h>

int main() {
	double base, exp, result;
	printf("Enter a base number: ");
	scanf("%1f", &base);
	printf("Enter an experiment: ");
	scanf("%1f", &exp);
	
	//calculates the power 
	result = pow(base, exp);
	
	printf("%.11f^%.11f = %.2f", base, exp, result);
	return 0;
}

