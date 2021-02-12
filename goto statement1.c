#include<stdio.h>
int main()
{

     int n;
     printf("Enter Number....");
     scanf("%d",&n);
     
     if(n%2==0)
     goto Even;
     else
     goto Odd;
     
     Even:
     	printf("Even");
     	exit(0);
     	Odd:
     		printf("Odd");
     		
     		return 0;
     	}

