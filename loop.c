#include<stdio.h>

int main()
{
	int age;
	printf("please enter your age");
	scanf("%d", &age);
	if (age < 100 ) {
		printf("you are preety young!\n ");
	}
	else if( age ==100 ) {
		printf("you are old\n");
	}
	else {
		printf( "you are really old\n ");
	}
	return 0;
}
