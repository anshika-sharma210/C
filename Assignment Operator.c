#include<stdio.h>
#include<conio.h>

main() {
	 
	 int a =21;
	 int c ;
	 c = a;
	 printf("Line 1 - = operator Example, value of c = %d\n", c);
	 
	 c += a;
	 printf("Line 2 - += Operator Example, value of c = %d\n",c);
	 
	 c -= a;
	 printf("Line 3 - -= Operator Example, value of c = %d\n",c);
	 
	 c *= a;
	 printf("Line 4 - *= Operator Example, value of c = %d\n",c);
	 
	 c /= a;
	 printf("Line 5 - /= Operator Example, value of c = %d\n",c);
	 
	 c =200;
	 c %= a;
	 printf("Line 6 - %= Operator Example, value of c = %d\n",c);
	 
	 c <<= 2;
	 printf("Line 7 - <<= Operator Example, value of c = %d\n",c);
	 
	 c >>= 2;
	 printf("Line 8 - >>= Oprator Example, value of c = %d\n",c);
	 
	 c &= 2;
	 printf("Line 9 - &= Operator Example, value of c = %d\n",c);
	 
	 c ^= 2;
	 printf("Line 10 - ^= Operator Example, value of c = %d\n",c);
	 
	 c |= 2;
	 printf("Line 11 - |= Operator Example, value of c = %d\n",c);
}
	 

