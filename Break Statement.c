#include <stdio.h>

int main() {
	int i;
	double number, sum = 0.0;
	for (i = 1; i <= 10; ++i) {
		printf("Enter a n%d: ", i);
		scanf("%lf", &number);
		
		// if the user enters a negative, break the loop 
		if (number < 0.0) {
			break;
		}
		sum += number; // sum = sum + number;
		}
		
     printf("Sum = %2.lf", sum);
     
     return 0;
 }
