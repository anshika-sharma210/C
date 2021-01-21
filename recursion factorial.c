#include <stdio.h>
  int fact(int);
  int  main() 
{
   int num;
   printf("enter a number =>");
   scanf("%d",&num);
   
   int ans = fact(num);
   
   printf("Factorial of %d is %d",num,ans);
   return 0;
}

int fact(int i) 
{
   if(i <= 1) return 1; else 
   return i * fact(i - 1);
}

