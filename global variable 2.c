#include <stdio.h>

/*global variables*/
int a,b;

/*function to set values to the global variables*/
void setValues(void)
{
	a=100;
	b=200;
}
/*function to print global variables*/
void getValues(void)
{
	printf("getValues ()...\n");
	printf("a=%d, b=%d\n",a,b);
}
int main()
{
	/*local variables*/
	int a,b;
	
	a=10;
	b=20;
	
	setValues();
	
	printf("main ()...\n");
	printf("a=%d, b=%d\n",a,b);
	
	getValues();
	
	return 0;	
}

