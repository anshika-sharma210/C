#include <stdio.h>
#include <conio.h>

// Main Function
int main()
{
	// variable declaration
	int a;
	
	//Get Input Value
	/* Increment Operator */
	a = 5;
	printf("Post Increment = %d\n",a++);
	
	a = 5;
	printf("Post Increment = %d\n",++a);
	
	/* Decrement Operators */
	a = 5;
	printf("post Decrement = %d\n",a--);
	
	a = 5;
	printf("pre Decrement = %d\n",--a);
	
	// wait for Output Screen
	getch();
	
	// Main Function return Statement
	return 0;
}
