#include <stdio.h>

main() {
	unsigned int a = 60; /* 60 = 0011 1100 */
	unsigned int b = 13; /* 13 = 0000 1101 */
	int c = 0;
	
	c =a & b;   /* 12 = 0000 1100 */
	printf("Line 1 - value of c is %d\n", c);
	
	c = a | b;   /* 61 = 0011 1101 */
	printf("Line 2 - value of c is %d\n", c);
	
	c = a ^ b;   /* 49 = 0011 0001 */
	printf("Line 3 - value of c is %d\n", c);
	
	c = ~a;     /* -61 = 1100 0011 */
	printf("Line 4 - value of c is %d\n", c);
	
	c= a << 2;   /* 240 =1111 0011 */	
	printf("Line 5 - value of c is %d\n", c);
	
	c = a >> 2;   /* 15 = 0000 1111 */
	printf("Line 6 - value of c is %d\n", c);
	
}
