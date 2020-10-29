#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 12, b = 3;
	int addition, subtraction, multiplication, division, modulus;
	addition = a + b; //addition of 3 and 12
	multiplication = a * b; //multiplication of both
	subtraction = a-b;//subtract 3 from 12
	division = a / b; //dividing 12 by 3 (number of times)
	modulus = a % b; //calcutaion the remainder
	printf("Addition of two numbers a, b is : %d\n", addition);
	printf("Multiplication of two numbers a, b is : %d\n", multiplication);
	printf("Subtraction of two numbers a, b is : %d\n", subtraction);
	printf("Division of two numbers a, b is : %d\n", division);
	printf("Modulus of two numbers a, b is : %d\n", modulus);
}
	

