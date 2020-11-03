#include <stdio.h>
int main() {
	double first, second, temp;
	printf("Enter first number: ");
	scanf("%lf", &first);
	printf("Enter second number: "); 
	scanf("%lf", &second);
	
	// value of first is assigned to temp
	temp = first;
	
	// value of second is assigned to first 
	first = second;
	
	// value of temp (intial value of first) is assigned to second
	second = temp;
	
	printf("\nAfter swapping, firstNumber = %.2lf\n", first);
	printf("After swapping, secondNumber = %.2lf", second);
	return 0;
}
