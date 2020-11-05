#include <stdio.h>

int main()

{
	int age;  //  variable declaration
	printf("Enter your age");
	
	scanf("%d", &age); //taking user input for age variable 
	(age >= 18)?(printf("eligible for voting")):(printf("not eligible for voting"));// conditional operator
	
	return 0;
}

