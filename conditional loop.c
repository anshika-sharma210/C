#include <stdio.h>

int main()
{
	int x;
	/* The loop goes while x < 10, and increases by one evry loop*/
	for (x =0; x < 10; x++ ) {
		/* Keep in mind that the loop condition checks the conditional statement before it loops again. consequently, when x equals  10 the loop breaks. xis updated before the condition  is checked. */
		printf( "%d\n" , x );
	}
	getchar();
}

