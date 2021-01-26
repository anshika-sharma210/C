#include<stdio.h> 
int pal(int); 
int main()
 {   
  int num; 
   printf("Enter any number => "); 
   scanf("%d",&num); 
    
   int ans = pal(num); 
 
   (ans == 0)?printf("number is palindrome "):printf("number is not palindrom"); 
 
   return 0; 
 
} 
int pal(int number) 
{ 
  int temp, remainder, rev=0; 
    temp = number; 
  while( number!=0 ) 
  { 
     remainder = number % 10;      
	 rev = rev*10 + remainder;   
	    number /= 10; 
  } 
  if ( rev == temp ) return 0; 
    else return 1; 
} 
 

